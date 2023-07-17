#include<stdio.h>

int main(){
	char fraction;
	printf("Lütfen ifadenizi seçiniz (+,-)\n");
	scanf("%c",&fraction);

	float a,b;
	printf("Lütfen a ve b sayıları için değer giriniz\n");
	scanf("%f%f",&a,&b);

	if(fraction == '+')
		printf("İşlemin sonucu %.2f'dir",1/a+1/b);
	else if (fraction == '-')
		printf("İşlemin sonucu %.2f'dir",1/a-1/b);
}
