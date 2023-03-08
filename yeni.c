#include <stdio.h>
#include <string.h>
#include "common.h"



//double calculate2(double m, int opjindeger)
//{
//	double deger = opjindeger * m;
//	return deger;
//}

//void uzunluk(int deger,char* turu){
//	double m;
//	double birim[4]={0, 0, 0, 0};

//	char isimler[4][20]={"metre","desimetre","santimetre","milimetre"};
//	if(strcmp(turu, isimler[0])){
//		m = 0.1;
//		for(int k=0;k<4;k++){
//			m= m * 10;
//			birim[k] = calculate2(m, deger);
//		}
//		printf("degerinizin uzunluklara göre karsılıgı:\n1.metre:%f\n2.desimetre:%f\n"
//			   "3.santimetre:%f\n4.milimetre:%f\n",birim[0],birim[1],birim[2],birim[3]);
//	}

//	if(strcmp(turu,isimler[1])){ // burda bir sıkıntı var
//		m=0.01;
//		for(int k=0;k<4;k++){
//			m=m*10;
//			birim[k] = calculate2(m, deger);
//		}
//		printf("degerinizin uzunluklara göre karsılıgı:\n1.metre:%f\n2.desimetre:%f\n"
//			   "3.santimetre:%f\n4.milimetre:%f\n",birim[0],birim[1],birim[2],birim[3]);
//	}
//	if(strcmp(turu,isimler[2])){
//		m=0.001;
//		for(int k=0;k<4;k++){
//			m=m*10;
//			birim[k] = calculate2(m, deger);
//		}
//		printf("degerinizin uzunluklara göre karsılıgı:\n1.metre:%f\n2.desimetre:%f\n"
//			   "3.santimetre:%f\n4.milimetre:%f\n",birim[0],birim[1],birim[2],birim[3]);
//	}
//	if(strcmp(turu,isimler[3])){
//		m=0.0001;
//		for(int k=0;k<4;k++){
//			m=m*10;
//			birim[k] = calculate2(m, deger);
//		}
//		printf("degerinizin uzunluklara göre karsılıgı:\n1.metre:%f\n2.desimetre:%f\n"
//			   "3.santimetre:%f\n4.milimetre:%f\n",birim[0],birim[1],birim[2],birim[3]);

//	}
//}
//uzunluk
double mTodm(double d){
	return d*10;
}
double dmTocm(double d){
	return mTodm(d)*10;
}
double cmTomm(double d){
	return dmTocm(d)*10;
}
double dmTom(double d){
	return cmTomm(d)/10;
}
double cmTodm(double d){
	return dmTocm(d)/10;
}
double mmTocm(double d)
{
	return cmTodm(d)/10;
}
//hacim artışı
double lTodl(double d)
{
	return d * 10;
}
double dlTocl(double d)
{
	return lTodl(d) * 10;
}
//hacim azalısı
double dlTol(double d)
{
	return d / 10;
}
double clTol(double d)
{
	return  dlTol(d) / 10;
}



//agırlık
double tTokg(double d){
	return d * 1000;
}

double tTogr(double d){
	return tTokg(d) * 1000;
}
double kgTot(double d){
	return d / 1000;
}
double grTot(double d){
	return kgTot(d)/1000;
}














