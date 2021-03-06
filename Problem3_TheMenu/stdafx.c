// stdafx.cpp : source file that includes just the standard includes
// Problem3_TheMenu.pch will be the pre-compiled header
// stdafx.obj will contain the pre-compiled type information

#include "stdafx.h"

// TODO: reference any additional headers you need in STDAFX.H
// and not in this file


int FindSum(int integers[], size_t length)
{
	int sum = 0;
	for (size_t i = 0; i < length; i++)
	{
		sum += integers[i];
	}
	return sum;
}


int FindAbsolute(int integer)
{
	return integer >= 0 ? integer : -integer;
}


void Dump(FILE *dest, FILE *src)
{
	for (char character = fgetc(src); character != EOF; character = fgetc(src))
	{
		fputc(character, dest);
	}
	return;
}

