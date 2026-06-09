#include <stdio.h>
int main(){
	int M;
	printf("Nhap M=");
	scanf("%d",&M);
	int N;
	printf("Nhap N=");
	scanf("%d",&N);
	int LS;
	printf("Nhap LS=");
	scanf("%d",%LS);

	int y;
	y=0;

	while(y<N){
		//YES
		int L;
		L = M * LS/100;
		M = M + L;
		y=y+1;
	}
	//NO
	printf("M= %d",M);
}