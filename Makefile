all:jop rop 

jop:jop.c 
	gcc -g  -fno-stack-protector -o $@  -march=armv8-a -static $<
	objdump  -S $@  > $@.asm

rop:rop.c
	gcc -g  -fno-stack-protector -o $@  -march=armv8-a -static $<
	objdump  -S $@  > $@.asm
