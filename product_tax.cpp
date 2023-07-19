#include<stdio.h>
#include<stdlib.h>
#define booktax 0.04
#define techtax 1.96
#define foodtax 0.56
int main(){
	
	float fiyat;
	char ürün;

	printf("Lütfen kitap için -> k ,gıda için -> g ve teknoloji için -> t ürünlerinden birini seçiniz\n");
	scanf("%c",&ürün);

	printf("Lütfen ürününüzün fiyatını giriniz\n");
	scanf("%f",&fiyat);

	float a;
	float b;
	float c;

	a = fiyat + fiyat*booktax;
	b = fiyat + fiyat*foodtax;
	c = fiyat + fiyat*techtax;

	switch(ürün)
	{
		case 'k' : printf("Kitabın etiket fiyatı: %.1f",a);
		break;
		case 'g' : printf("Temel gıdanın etiket fiyatı: %.1f",b);
                break;
		case 't' : printf("Teknolojinin etiket fiyatı: %.1f",c);
                break; 
	}
}
