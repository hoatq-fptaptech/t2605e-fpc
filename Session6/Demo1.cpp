#include <stdio.h>
int main(){
	int n;
	printf("Nhap n=");
	scanf("%d",&n);
	int arr[n];

	for(int i=0;i<n;i++){
		printf("nhap so:");
		scanf("%d",&arr[i]);
	}

	int x;
	printf("Nhap x=");
	scanf("%d",&x);
	int flag = 0;
	for(int i=0;i<n;i++){
		if(arr[i] == x){
			printf("Da thay ngoi nha dang tim kiem");
			flag = 1;
			break;
		}
	}
	if(flag == 0){
		printf("khong thay ngoi nha nao phu hop");
	}

}