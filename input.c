/* A simple program demonstrating input and output */

#include <stdio.h>
#include <ctype.h>

#define MAXOP     40

char s[MAXOP];

void main(void) {
	printf("What is your name?\n");
	gets(s);
	printf("Hello %s\n",s);
}