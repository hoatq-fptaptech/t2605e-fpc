#include <stdio.h>
int main(){
	int a;
	printf("Nhap a=");
	scanf("%d",&a);

	int b;
	printf("Nhap b=");
	scanf("%d",&b);

	if(a==0){
		if(b==0){
			printf("PT vo so nghiem");
		}else{
			printf("PT vo nghiem");
		}
	}else{ 
		float x = -(float)b/a;
		printf("x=%f",x);
	}
}