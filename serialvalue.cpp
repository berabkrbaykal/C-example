#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(){

        int i,n;
        float x,seri;

        printf("Pozitif sayı giriniz:\n");
        scanf("%d",&n);
	printf("Reel sayı giriniz :\n");
	scanf("%f",&x);
        for(i=1;i<=2*n-1;i+=2)
        {
                seri+=i/pow(x,i+1);
        }
        printf("Seri: %.2f",seri);
}
