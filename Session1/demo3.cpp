#include <stdio.h>
int main(){
	// INPUT num
	int num;
	printf("Nhap num=");
	scanf("%d",&num);

	// r = num MOD 2
	int r;
	r = num % 2;

	if(r==0){
		printf("So chan");
	}else{
		printf("So le");
	}

}