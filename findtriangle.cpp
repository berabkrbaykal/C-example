#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int main(){
	int a,b,c;
	printf("Lütfen üçgenin açı değerlerini giriniz\n");
	scanf("%d%d%d",&a,&b,&c);

	if(a+b+c<180)
		printf("Açılar toplamı 180 olmak zorundadır");
	else if(a+b+c>180)
		printf("Açılar toplamı 180'den büyük olamaz");
	else if (a==b&&a==c&&b==c)
		printf("Üçgenimiz eşkenar üçgendir");
	else if(a==b||b==c||a==c)
		printf("Üçgenimiz ikizkenar üçgendir");
	else 
		printf("Üçgenimiz çeşitkenar üçgendir");
}
