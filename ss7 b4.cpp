#include <stdio.h>
int main(){
	int n;
	int i;
	printf("Nhap so phan tu cua mang : ");
	scanf("%d", &n);
	int arr[n];
	for (i = 0; i<n; i++){
		printf("Moi ban nhap phan tu thu %d : ",i+1);
		scanf("%d", &arr[i]);
	}
	printf("\n");
	printf("Cac phan tu trong mang la:\n");
    for ( i = 0; i < n; i++) {
        printf("arr[%d] = %d\n", i, arr[i]);
    }
	return 0;
}
