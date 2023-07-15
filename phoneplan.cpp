#include<stdio.h>

int main(){
	float a;
	printf("Lütfen kaç dakika telefonla konuştuğunuzu giriniz\n");
	scanf("%f",&a);

	float fatura;
	fatura = a*0.25;
	float fatura2;
	fatura2 = 0.75 + (a-3)*0.08;
	if(a<=3)
		printf("Ödeyeceğiniz miktar %.2f",fatura);
	else if (a>3)
		printf("Ödeyeceğiniz miktar %.2f",fatura2);
}
