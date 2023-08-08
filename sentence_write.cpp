#include<stdio.h>
int main(){	
	char cumle[100];
	printf("Lütfen cümle giriniz\n");
	fgets(cumle,100,stdin);

	int i;
        int a=0;
        printf("Lütfen cümleyi kaç defa yazdırmak istediğinizi giriniz\n");
        scanf("%d",&i);

	while(a<=i)
	{
		printf("%s\n",cumle);
		a++;
	}
}
