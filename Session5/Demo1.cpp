#include <stdio.h>
int main(){
	int arr[3];
	// arr[0] = 30;
	// arr[1] = 15;
	// arr[2] = 60;
	int x;
	scanf("%d",&x);

	int t2605e[18];
	
	for(int i=0;i<18;i++){
		// x <==> t2605e[i]
		printf("Nhap so thu %d:\n",i);
		scanf("%d",&t2605e[i]);
	}
	// Tìm số lớn nhất trong mảng t2605e
	int max = t2605e[0];
	for(int i=0;i<18;i++){
		if(t2605e[i] > max){
			max = t2605e[i];
		}
	}
	printf("Max: %d",max);
	// Tìm số lớn thứ 2 trong mảng t2605e
	int max2 = max ;
	// tìm 1 số trong mảng mà nhỏ hơn số hiện tại đang có
	for(int i=0;i<18;i++){
		if(t2605e[i] < max){
			max2 = t2605e[i];
			break;// thoát vòng lặp
		}
	}
	if(max2== max){
		printf("Mảng toàn số giống nhau");
	}
	for(int i=0;i<18;i++){
		if(t2605e[i]>max2 && t2605e[i]<max){
			max2 = t2605e[i];
		}
	}
	printf("Max2: %d",max2);
}