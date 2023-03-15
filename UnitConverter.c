#include "common.h"
#include <stdio.h>
#include <string.h>



double mTodm(double d){
	return d*10;
}
double dmTocm(double d){
	return d*10;
}
double cmTomm(double d){
	return d*10;
}
double mTocm(double d){//
	return mTodm(dmTocm(d));
}
double mTomm(double d){//
	return mTodm(dmTocm(cmTomm(d)));
}
double dmTomm(double d){//
	return dmTocm(cmTomm(d));
}
double dmTom(double d){
	return d/10;
}
double cmTodm(double d){
	return d/10;
}
double mmTocm(double d){
	return d/10;
}
double mmTodm(double d){
	return mmTocm(cmTodm(d));
}
double mmTom(double d){
	return mmTocm(cmTodm(d));
}
double cmTom(double d){
	return cmTodm(dmTom(d));
}







//hacim artışı
double lTodl(double d){
	return d * 10;
}
double dlTocl(double d){
	return d * 10;
}
double lTocl(double d){
	return lTodl(dlTocl(d));
}
//hacim azalısı
double clTodl(double d){
	return d / 10;
}
double dlTol(double d){
	return d / 10;
}
double clTol(double d){
	return clTodl(dlTol(d));
}








//agırlık
double tTokg(double d){
	return d * 1000;
}
double kgTogr(double d){
	return d*1000;
}
double tTogr(double d){
	return tTokg(kgTogr(d));
}
double kgTot(double d){
	return d / 1000;
}
double grTokg(double d){
	return d / 1000;
}
double grTot(double d){
	return grTokg(kgTot(d));
}
