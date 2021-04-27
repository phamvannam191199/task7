#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) 
{
	int arr[5];
	int i;
	float arr2[10];

	
	
	for(i=0;i<5;i++){
		printf("nhap so thu[%d]:\n",i);
		scanf("%d",&arr[i]);
	}
	/*printf("so da nhap la:\n");
	for(i=0;i<5;i++){
		printf("%d  ",arr[i]);
	}*/
	for(i=0;i<5;i++){
		arr2[i] = arr[i];
	}
	for(i=0;i<5;i++){
		printf("%2d    %.f\n",arr[i],arr2[i]);
	}	
	return 0;
}

