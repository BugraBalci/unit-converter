#include <stdio.h>
#include <string.h>
#include "common.h"

int main()
{
	double value = 0;
	int i = 0;
	char type[20];
	printf("Lutfen gireceğiniz olcu birimini giriniz\n1.Uzunluk\n2.hacim\n3.ağırlık\n");
	scanf("%d",&i);
	if(i == 1){
		printf("Lutfen uzunluk degerinizin giriniz\n");
		scanf("%lf",&value);
		printf(" lutfen hacimsel cinsini giriniz:\n1.metre\n2.desimetre\n3.santimetre\n4.milimetre\n");
		scanf("%s",type);
		char targetType[20];
		printf(" lutfen donusturmek istediginiz uzunlugu giriniz:\n1.metre\n2.desimetre\n3.santimetre\n4.milimetre\n");
		scanf("%s", targetType);

		if (strcmp(type, "metre") == 0) {
			if (strcmp(targetType, "metre") == 0) {
				printf("Degeriniz %f", value);
			} else if (strcmp(targetType, "desimetre") == 0) {
				printf("Degeriniz %f", mTodm(value));
			}else if (strcmp(targetType, "santimetre") == 0) {//bunun fonk duruyo
				printf("Degeriniz %f",mTocm(value));
			}else if(strcmp(targetType, "milimetre") == 0){
				printf("Degeriniz %f",mTomm(value));
			}
		}
//		hacim(value,type);
		if (strcmp(type, "desimetre") == 0) {
			if (strcmp(targetType, "metre") == 0) {
				printf("Degeriniz %f", dmTom(value));
			} else if (strcmp(targetType, "desimetre") == 0) {
				printf("Degeriniz %f", value);
			}else if (strcmp(targetType, "santimetre") == 0) {//bunun fonk duruyo
				printf("Degeriniz %f", dmTocm(value));
			}else if(strcmp(targetType, "milimetre") == 0){
				printf("Degeriniz %f", dmTomm(value));
			}
		}
		if (strcmp(type, "santimetre") == 0) {
			if (strcmp(targetType, "metre") == 0) {
				printf("Degeriniz %f",cmTom(value));
			} else if (strcmp(targetType, "desimetre") == 0) {
				printf("Degeriniz %f", cmTodm(value));
			}else if (strcmp(targetType, "santimetre") == 0) {//bunun fonk duruyo
				printf("Degeriniz %f",value);
			}else if (strcmp(targetType, "milimetre") == 0){
				printf("Degeriniz %f",cmTomm(value));
			}
		}
		if (strcmp(type, "milimetre") == 0) {
			if (strcmp(targetType, "metre") == 0) {
				printf("Degeriniz %f",mmTom(value));
			} else if (strcmp(targetType, "desimetre") == 0) {
				printf("Degeriniz %f", mmTodm(value));
			}else if (strcmp(targetType, "santimetre") == 0) {//bunun fonk duruyo
				printf("Degeriniz %f",mmTocm(value));
			}else if (strcmp(targetType, "milimetre") == 0){
				printf("Degeriniz %f",value);
			}
		}
	}
	if(i == 2){
		printf("Lutfen hacim degerinizin giriniz\n");
		scanf("%lf",&value);
		printf(" lutfen hacimsel cinsini giriniz:\n1.litre\n2.desilitre\n3.santilitre\n");
		scanf("%s",type);
		char targetType[20];
		printf(" lutfen donusturmek istediginiz hacimsel istediginizi giriniz:\n1.litre\n2.desilitre\n3.santilitre\n");
		scanf("%s", targetType);

		if (strcmp(type, "litre") == 0) {
			if (strcmp(targetType, "litre") == 0) {
				printf("Degeriniz %f", value);
			} else if (strcmp(targetType, "desilitre") == 0) {
				printf("Degeriniz %f", lTodl(value));
			}else if (strcmp(targetType, "santilitre") == 0) {//bunun fonk duruyo
				printf("Degeriniz %f",dlTocl(value));
			}
		}
		if (strcmp(type, "desilitre") == 0) {
			if (strcmp(targetType, "litre") == 0) {
				printf("Degeriniz %f", dlTol(value));
			} else if (strcmp(targetType, "desilitre") == 0) {
				printf("Degeriniz %f", value);
			}else if (strcmp(targetType, "santilitre") == 0) {//bunun fonk duruyo
				printf("Degeriniz %f", dlTocl(value));
			}
		}
		if (strcmp(type, "santilitre") == 0) {
			if (strcmp(targetType, "litre") == 0) {
				printf("Degeriniz %f",clTol(value));
			} else if (strcmp(targetType, "desilitre") == 0) {
				printf("Degeriniz %f", clTodl(value));
			}else if (strcmp(targetType, "santilitre") == 0) {//bunun fonk duruyo
				printf("Degeriniz %f",value);
			}
		}
	}
	if(i == 3){
		printf("Lutfen agirlik degerinizin giriniz\n");
		scanf("%lf",&value);
		printf(" lutfen agirlik cinsini giriniz:\n1.ton\n2.kilogram\n3.gram\n");
		scanf("%s",type);
		char targetType[20];
		printf(" lutfen donusturmek istediginiz hacimsel istediginizi giriniz:\n1.ton\n2.kilogram\n3.gram\n");
		scanf("%s", targetType);

		if (strcmp(type, "ton") == 0) {
			if (strcmp(targetType, "ton") == 0) {
				printf("Degeriniz %f", value);
			} else if (strcmp(targetType, "kilogram") == 0) {
				printf("Degeriniz %f", tTokg(value));
			}else if (strcmp(targetType, "gram") == 0) {//bunun fonk duruyo
				printf("Degeriniz %f",kgTogr(value));
			}
		}
		if (strcmp(type, "kilogram") == 0) {
			if (strcmp(targetType, "ton") == 0) {
				printf("Degeriniz %f", kgTot(value));
			} else if (strcmp(targetType, "kilogram") == 0) {
				printf("Degeriniz %f", value);
			}else if (strcmp(targetType, "gram") == 0) {//bunun fonk duruyo
				printf("Degeriniz %f", kgTogr(value));
			}
		}
		if (strcmp(type, "gram") == 0) {
			if (strcmp(targetType, "ton") == 0) {
				printf("Degeriniz %f",grTot(value));
			} else if (strcmp(targetType, "kilogram") == 0) {
				printf("Degeriniz %f", grTokg(value));
			}else if (strcmp(targetType, "gram") == 0) {//bunun fonk duruyo
				printf("Degeriniz %f",value);
			}
		}
	}
	return 0;
}
