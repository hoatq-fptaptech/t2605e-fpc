#include <stdio.h>
int main(){
	int arr[6] = {4,6,3,1,5,2};
	for(int i=0;i<6-1;i++){
		// với mỗi lần ở đây, sẽ đẩy đc 1 số lớn về cuối
		for(int j=0;j<6-i-1;j++){
			if(arr[j] > arr[j+1]){
				int tmp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = tmp;
			}
		}
	}
		// in mang
	for(int i=0;i<6;i++){
		printf("%d\t",arr[i] );
	}

}