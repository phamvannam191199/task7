#include<stdio.h>

int main(){
	float a,b,TB;
	
	printf("nhap vao diem mon toan=");
	scanf("%f",&a);
	printf("nhap vao diem mon tieng anh=");
	scanf("%f",&b);
	TB= (a+b)/2;
	printf("\ndiem qua mon la %2.f",TB);
	
	if(TB>9)
	printf("ban da duoc hoc bong 1000S\n");
	else if(8<TB && TB<9)
	printf("ban da duoc hoc bong 50S\n");
	else
	printf("chia buon voi ban");
	}
