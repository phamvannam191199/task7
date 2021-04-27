#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{
	char ten[5][1000];
	char i;

	for(i=0;i<5;i++){
		printf("Nhap ten hoc sinh [%c]:\n",i);
		scanf("%c",&ten);
		gets(ten);
	}

	printf("cac ten da nhap\n");
	for(i=0;i<5;i++)
	printf ("%3c  ",ten[i]);

	return 0;
}

