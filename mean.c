#include "mean.h"

float mean(int a, int b)
{
	return (a + b) / 2;
}


complexi_float_t ComplexMean(complexi_int_t a, complexi_int_t b)
{
	complexi_float_t res;

	res.re = mean(a.re, b.re);
	res.im = mean(a.im, b.im);

	return res;
}