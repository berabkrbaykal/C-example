#include<stdio.h>
int main(){
	char cumle[100];
	printf("Lütfen bir cümle giriniz: ");
	fgets(cumle,100,stdin);

	int i=0;
	while(cumle[i])
	{
		i++;
	}
	printf("Cümledeki karakter sayısı %d'dir",i);
}
