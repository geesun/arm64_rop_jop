#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>

void rop_symbol()
{
	system("/bin/ls");
	printf("%s\n","/bin/sh");
}

void rop_bad_func()
{
	char data[16] = {0}; 
	unsigned long long u64 = 0; 
	int fd = 0; 
	fd = open("./rop.data",O_RDONLY); 
	read(fd,&u64,512);
}

int main()
{
	rop_bad_func();
	return 0;
}


