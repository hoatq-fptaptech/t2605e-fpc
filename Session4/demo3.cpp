#include <stdio.h>
int main(){
	int x = 10;
	int i=10;

	// while(i<x){
	// 	printf("while i<x\n");
	// }

	// do{
	// 	if(i<x)
	// 		printf("do..while i<x\n");
	// }while(i<x);
	int m;
	printf("Nhap số tiền phải trả:\n");
	scanf("%d",&m);
	while(m<=0){
		printf("Nhap số tiền phải trả:\n");
		scanf("%d",&m);
	}

	do{
		printf("Nhap số tiền phải trả:\n");
		scanf("%d",&m);
	}while(m<=0);

}