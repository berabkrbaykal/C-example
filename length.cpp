#include<stdio.h>
#include<stdlib.h>
#define tam 150

int main(){
	int no,boy,fark,minboy,minno;
	printf("Öğrencinin numarası: ");
	scanf("%d",&no);
	printf("Öğrencinin boyu: ");
	scanf("%d",&boy);

	minno=no;
	fark=abs(boy-tam);
	
	while(no>0)
	{
		printf("\nÖğrencinin numarası: ");
		scanf("%d",&no);
		printf("\nÖğrencinin boyu: ");
		scanf("%d",&boy);

		if(abs(boy-tam)<fark)
		{
			fark = abs(boy-tam);
			minno=no;
			minboy=boy;
		}
	}
	printf("%d numaralı öğrenci %d cm boyuyla %d cm'e en yakındır",minno,minboy,tam);
}
