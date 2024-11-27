#include <stdio.h>
int main(){
	int arr[5];
	int i;
	printf("nhap lan luot 5 phan tu\n");
	
	for(i = 0; i < 10;i++ ){
		printf("nhap phan tu thu %d : ", i+1);
		scanf("%d", &arr[i]);		
	}
	printf("mang da duoc nhap la :  \n");
	for(i = 0; i < 5; i++){
		printf("arr[%d] %d\n", i, arr[i]);
	}
}
