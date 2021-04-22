#include<stdio.h>

int main(){
	int pin, card, a, b;
	char nhap_lai='y';
	a=123;
	b=456;
	
	while (nhap_lai=='y'){
	
	printf("nhap vao ma pin :");
	scanf("%d",&pin);
	printf("nhap vao ma card :");
	scanf("%d",&card);
	
	if(pin==a && card==b)
	printf("\n=========================\n\n1.Rut tien \n2.Chuyen tien\n3.So du\n\n===============");
	 else   printf("ma the sai\n xin vui long nhap lai(y_n):");
	
	fflush(stdin);
	scanf("%c",&nhap_lai);}}
	
