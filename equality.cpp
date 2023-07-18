#include<stdio.h>
#define tavhiz 0.038
#define kushiz 0.012
int main(){
	float kus = 2272;
	float tavsan = 1042;

	int yil = 0;
	while(tavsan<kus)
	{
		tavsan += tavsan*tavhiz;
		kus += kus*kushiz;
		yil++;
		printf("%d.yıl : tavşan = %d kuş = %d\n",yil,(int)tavsan,(int)kus);
	}
	printf("Tavşanlar kuşları %d. yılda geçer ",yil);
}
