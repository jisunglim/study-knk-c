// Name : tint.c
// Purpose : test integer.
// Author : Jay J. Lim
// Date : Dec. 12, 2016
//
// Copyright (c) 2016 Jay J. Lim. All right reserved.

#include <stdio.h>
#include <limits.h>
#include <stdbool.h>

int main(void)
{
	// Standard Signed Integer Type
	short s = SHRT_MAX;
	int i = INT_MAX;
	long l = LONG_MAX;
	long long ll = LLONG_MAX;
	char c = 'a';

	// Standard Unsigned Integer Type
	unsigned short us = USHRT_MAX;
	unsigned int ui = UINT_MAX;
	unsigned long ul = ULONG_MAX;
	unsigned long long ull = ULLONG_MAX;
	unsigned char uc = 'a';
	_Bool plain_bool = 1;
	bool stdlib_bool = true;


	printf(""
						 "%hd  \n"
						 "%hu  \n"
						 "%ho  \n"
						 "%hx  \n"
						 "%d   \n"
						 "%u   \n"
						 "%o   \n"
						 "%x   \n"
						 "%ld  \n"
						 "%lu  \n"
						 "%lo  \n"
						 "%lx  \n"
						 "%lld \n"
						 "%llu \n"
						 "%llo \n"
						 "%llx \n"
						 "%c   \n"
						 "%c   \n"
						 "%d   \n"
						 "%d   \n",
				 s,  us,  0123,   0x123u,
				 i,  ui,  0123,   0x123u,
				 l,  ul,  0123l,  0x123ul,
				 ll, ull, 0123ll, 0x123ull,
				 c, uc,
				 plain_bool,
				 stdlib_bool
	);

	return 0;
}