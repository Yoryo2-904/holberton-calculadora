#ifndef _MAIN_H_
#define _MAIN_H_

/* Libraries */
#include <stdio.h>
#include <stdlib.h>

/* structures */

typedef struct char_function
{
	char operator;
	void (f*) (int num, int num2);
} char_function_t;
/* protoypes */
void sumf(int num, int num2);
void difff(int num, int num2);
void mulf(int num, int num2);
void dividef(int num, int num2);

#endif
