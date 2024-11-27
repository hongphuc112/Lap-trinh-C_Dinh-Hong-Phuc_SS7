#include <stdio.h>
int main(){
    int n;
    printf("Nhap so phan tu cua mang: ");
    scanf("%d", &n);
    int array[n];
    printf("Nhap cac phan tu cua mang ( so le):\n");
    for (int i = 0; i < n; i++){
        do {
            printf("Phan tu thu %d: ", i + 1);
            scanf("%d", &array[i]);
            if(array[i] % 2 == 0){
                printf("Khong hop le, vui long nhap lai so le.\n");
            }
        }while(array[i] % 2 == 0);
    }
}

