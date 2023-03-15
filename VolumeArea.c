#include "common.h"
#include <stdio.h>
#include <string.h>

//hacim
double cone (double r,double h)
{
	return (r* r* h* 1/3* 3.14);
}
double sphere (double r)
{
	return (4 /3* 3.14* r* r);
}
//Alan
double square (double r)
{
	return (r* r);
}
double circle(double r)
{
	return (3.14* r* r);
}
