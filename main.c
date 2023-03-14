#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "common.h"
#include <errno.h>
#include <limits.h>

int main(int argc, char* argv[])
{
	double value = 0;
	int i = 0;
	char type[20];
	int ret;
	char* ptr;
	if(argc == 1) {
		printf("Lutfen --help komutu giriniz\n ");
		return 0;
	}
	else if(argc == 2) {
		char units[24][24] ={ "mTodm" , "dmTocm" , "cmTomm" , "mTocm" , "mTomm" , "dmTomm" , "dmTom" , "cmTodm" , "mmTocm" , "mmTodm" , "mmTom" , "cmTom" , "lTodl"
		"dlTocl" , "lTocl" , "clTodl" , "dlTol" , "clTol" , "tTokg" , "kgTogr" , "tTogr" , "kgTot" , "grTokg" , "grTot" };
		int unitssize = sizeof(units)/sizeof(units[0]);
		if(strcmp(argv[1], "--help")==0) {
					for(i = 0; i < unitssize; i++) {
						printf("%s\n", units[i]);
					}
				}
			}
			printf("Lutfen ilk argumaniniz fonksiyon ismi ikinci argumaniniz girmek istediginiz deger olsun\n");
	if(argc == 3){
		ret = strtol(argv[2], &ptr,10);
		if(strcmp(argv[1], "mTodm") == 0) { // whitespace example
			printf( "%f\n", mTodm(ret ));
		}
		if(strcmp(argv[1], "dmTocm") ==0 ){
			printf( "%f\n", dmTocm(ret));
		}
		if(strcmp(argv[1] , "cmTomm") == 0){
			printf( "%f\n", cmTomm(ret));
		}
		if(strcmp(argv[1] , "mTocm") == 0){
			printf( "%f\n", mTocm(ret));
		}
		if(strcmp(argv[1] , "mTomm") == 0){
			printf( "%f\n", mTomm(ret));
		}
		if(strcmp(argv[1] , "dmTomm") == 0){
			printf( "%f\n", dmTomm(ret));
		}
		if(strcmp(argv[1] , "dmTom") == 0){
			printf( "%f\n", dmTom(ret));
		}
		if(strcmp(argv[1] , "cmTodm") == 0){
			printf( "%f\n", cmTodm(ret));
		}
		if(strcmp(argv[1] , "mmTocm") == 0){
			printf( "%f\n", mmTocm(ret));
		}
		if(strcmp(argv[1] , "mmTodm") == 0){
			printf( "%f\n", mmTodm(ret));
		}
		if(strcmp(argv[1] , "mmTom") == 0){
			printf( "%f\n", mmTom(ret));
		}
		if(strcmp(argv[1] , "cmTom") == 0){
			printf( "%f\n", cmTom(ret));
		}
		if(strcmp(argv[1] , "lTodl") == 0){
			printf( "%f\n", lTodl(ret));
		}
		if(strcmp(argv[1] , "dlTocl") == 0){
			printf( "%f\n", dlTocl(ret));
		}
		if(strcmp(argv[1] , "lTocl") == 0){
			printf( "%f\n", lTocl(ret));
		}
		if(strcmp(argv[1] , "clTodl") == 0){
			printf( "%f\n", clTodl(ret));
		}
		if(strcmp(argv[1] , "dlTol") == 0){
			printf( "%f\n", dlTol(ret));
		}
		if(strcmp(argv[1] , "clTol") == 0){
			printf( "%f\n", clTol(ret));
		}
		if(strcmp(argv[1] , "tTokg") == 0){
			printf( "%f\n", tTokg(ret));
		}
		if(strcmp(argv[1] , "kgTogr") == 0){
			printf( "%f\n", kgTogr(ret));
		}
		if(strcmp(argv[1] , "tTogr") == 0){
			printf( "%f\n", tTogr(ret));
		}
		if(strcmp(argv[1] , "kgTot") == 0){
			printf( "%f\n", kgTot(ret));
		}
		if(strcmp(argv[1] , "grTokg") == 0){
			printf( "%f\n", grTokg(ret));
		}
		if(strcmp(argv[1] , "grTot") == 0){
			printf( "%f\n", grTot(ret));
		}
	}
}



