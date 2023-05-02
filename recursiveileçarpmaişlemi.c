#include <stdio.h>

int carpma(int,int,int);

int main(int argc, char const *argv[])
{
	int s1,s2,sayac=0;
	printf("Iki sayi giriniz  :  ");
	scanf("%d%d",&s1,&s2);
    
    printf("Sonuc : %d",carpma(s1,s2,sayac));

    return 0;
}

int carpma(int s1,int s2,int sayac){

	if(s1==sayac)
		return 0;

	return s2+carpma(s1,s2,sayac+1);
}