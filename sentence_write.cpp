#include<stdio.h>
int main(){     
        char cumle[100];
        int i;
        printf("Lütfen cümle giriniz\n");
        fgets(cumle,100,stdin);

        for(i=0;cumle[i];i++)
        {
                printf("%c\n",cumle[i]);
        }
}

