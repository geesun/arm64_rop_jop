#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>

typedef void (*jop_func_t)(); 


void jop_symbol()
{
	system("/bin/ls");
	printf("%s\n","/bin/sh");
}

void jop_bad_func()
{
	jop_func_t func = NULL;
	char data[16] = {0}; 
	unsigned long long u64 = 0; 
	int fd = 0; 

	fd = open("./jop.data",O_RDONLY); 
	func = jop_symbol;
	read(fd,&u64,512);
	func();
}

int main()
{
	jop_bad_func();
	return 0;
}


