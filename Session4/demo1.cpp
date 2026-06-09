#include <stdio.h>
int main(){
	int n;
	printf("Nhap n=" );
	scanf("%d",&n);

	int i=1;
	int s=0;

	while(i<=n){
		s=s+i;
		i++;
	}
	printf("S=%d",s);
}