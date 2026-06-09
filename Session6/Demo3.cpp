#include <stdio.h>
int main(){
	char st[100];
	// for(int i=0;i<100;i++){
	// 	printf("Nhap ky tu:");
	// 	scanf("%c",&st[i]);
	// }

	printf("NHap gia tri:\n");
	scanf("%s",st);// sẽ ko có dấu & - nhập sẽ không được có khoảng trống

	printf("Gia tri vua nhap: %s",st);
	
}