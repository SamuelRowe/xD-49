#include <stdio.h>
#include <stdlib.h>

struct CPU 
{
	using Byte = unsigned char;
	using Word = unsigned short;
	
	Word PC;		//Program Counter (16-bit Register)//
	Word PSW;	//Program Status Word (16-bit Register)//
	Word SP;		//Stack Pointer (16-bit Register)//
	Byte CCW;	//CPU Control Word (8-bit Register)//
	Byte X, A, C, B, VP, UP, E, D, L, H; //General Purpose Registers(8-bit)
};