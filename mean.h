#ifndef _MEANH_
#define _MEANH_

typedef struct complexi_int
{
	int re;
	int im;
}complexi_int_t;

typedef struct complexi_float
{
	float re;
	float im;
}complexi_float_t;

float mean(int a, int b);

complexi_float_t ComplexMean(complexi_int_t a, complexi_int_t b);

#endif