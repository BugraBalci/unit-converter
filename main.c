#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "common.h"
#include <errno.h>
#include <limits.h>

int main(int argc, char* argv[]){
	double value = 0;
	int i = 0;
	char type[20];
	int ret;
	char* ptr;
	ret = strtol(argv[2],&ptr,10);
	printf("--help ile hangi fonksiyonların oldugunu ogrenebilirsiniz ardından ilk argumaniniz fonksyon turu ikinci"
			" argumaniniz deger olmalıdır ");
	char units[24][24] ={ "mTodm" , "dmTocm" , "cmTomm" , "mTocm" , "mTomm" , "dmTomm" , "dmTom" , "cmTodm" , "mmTocm" , "mmTodm" , "mmTom" , "cmTom" , "lTodl"
					 "dlTocl" , "lTocl" , "clTodl" , "dlTol" , "clTol" , "tTokg" , "kgTogr" , "tTogr" , "kgTot" , "grTokg" , "grTot" };
	int unitssize = sizeof(units)/sizeof(units[0]);
	if(strcmp(argv[1], "--help")==0) {
		for(i = 0; i < unitssize ; i++){
			printf("%s\n", units[i]);
		}
		return 0;
	}
	if( strcmp ( argv[1] , "mTodm" ) ==0 ){
		printf ( "%f\n" , mTodm(ret ));
	}
	if( strcmp ( argv[1] , "dmTocm") ==0 ){
		printf ( "%f\n" , dmTocm(ret) );
	}
	if( strcmp ( argv[1] , "cmTomm") == 0){
		printf ( "%f\n" , cmTomm(ret) );
	}
	if( strcmp ( argv[1] , "mTocm") == 0){
		printf ( "%f\n" , mTocm(ret) );
	}
	if( strcmp ( argv[1] , "mTomm") == 0){
		printf ( "%f\n" , mTomm(ret) );
	}
	if( strcmp ( argv[1] , "dmTomm") == 0){
		printf ( "%f\n" , dmTomm(ret) );
	}
	if( strcmp ( argv[1] , "dmTom") == 0){
		printf ( "%f\n" , dmTom(ret) );
	}
	if( strcmp ( argv[1] , "cmTodm") == 0){
		printf ( "%f\n" , cmTodm(argc) );
	}
	if( strcmp ( argv[1] , "mmTocm") == 0){
		printf ( "%f\n" , mmTocm(argc) );
	}
	if( strcmp ( argv[1] , "mmTodm") == 0){
		printf ( "%f\n" , mmTodm(argc) );
	}
	if( strcmp ( argv[1] , "mmTom") == 0){
		printf ( "%f\n" , mmTom(argc) );
	}
	if( strcmp ( argv[1] , "cmTom") == 0){
		printf ( "%f\n" , cmTom(argc) );
	}
	if( strcmp ( argv[1] , "lTodl") == 0){
		printf ( "%f\n" , lTodl(argc) );
	}
	if( strcmp ( argv[1] , "dlTocl") == 0){
		printf ( "%f\n" , dlTocl(argc) );
	}
	if( strcmp ( argv[1] , "lTocl") == 0){
		printf ( "%f\n" , lTocl(argc) );
	}
	if( strcmp ( argv[1] , "clTodl") == 0){
		printf ( "%f\n" , clTodl(argc) );
	}
	if( strcmp ( argv[1] , "dlTol") == 0){
		printf ( "%f\n" , dlTol(argc) );
	}
	if( strcmp ( argv[1] , "clTol") == 0){
		printf ( "%f\n" , clTol(argc) );
	}
	if( strcmp ( argv[1] , "tTokg") == 0){
		printf ( "%f\n" , tTokg(argc) );
	}
	if( strcmp ( argv[1] , "kgTogr") == 0){
		printf ( "%f\n" , kgTogr(argc) );
	}
	if( strcmp ( argv[1] , "tTogr") == 0){
		printf ( "%f\n" , tTogr(argc) );
	}
	if( strcmp ( argv[1] , "kgTot") == 0){
		printf ( "%f\n" , kgTot(argc) );
	}
	if( strcmp ( argv[1] , "grTokg") == 0){
		printf ( "%f\n" , grTokg(argc) );
	}
	if( strcmp ( argv[1] , "grTot") == 0){
		printf ( "%f\n" , grTot(argc) );
	}
}
