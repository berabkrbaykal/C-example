#include<stdio.h>
int main(){
	char ch;
	printf("Bir karakter giriniz");
	scanf("%c",&ch);
	int sira;

	if((ch>='A')&&(ch<='Z'))
	{
		sira = (int)ch-(int)'A'+1;
	}	
	else if((ch>='a')&&(ch<='z'))
	{
		sira = (int)ch-(int)'a'+1;
	}
	else 
		printf("Lütfen harf giriniz klavyede böyle bir harf yok");

	printf("%c : %d. harftir",ch,sira);
}
