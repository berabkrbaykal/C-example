#include<stdio.h>
#include<stdlib.h>

int main(){
	float a,b;
	
	char op;
        printf("Lütfen operatör giriniz");
        scanf("%c",&op);

	printf("Lütfen a ve b sayılarını giriniz\n");
	scanf("%f%f",&a,&b);

	switch(op)
	{
		case '+' :printf("a+b: %.1f",a+b);
		break;
		case '-' :printf("a-b: %.1f",a-b);
		break;	
		case '/' :printf("a/b: %.1f",a/b);
		break;
		case '*' :printf("a*b: %.1f",a*b); 
	}
}
