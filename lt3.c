#include<stdio.h>
int main() {
    int array[100];
    int n, value, position;
    while (1) {
        printf("Nhap so phan tu muon nhap (1 - 100): ");
        scanf("%d", &n);
        if (n > 0 && n <= 100) { 
            break; 
        } else {
            printf("Gioi han tu 1 đen 100\n");
        }
    }
    printf("Nhap cac phan tu cua mang:\n");
    for (int i = 0; i < n; i++) {
        printf("Phan tu thu %d: ", i + 1);
        scanf("%d", &array[i]);
    }

    // Hiển thị mảng ban đầu
    printf("Mang sau khi nhap: ");
    for (int i = 0; i < n; i++) 
    {
        printf("%d ", array[i]);
    }
    printf("\n");
   while (1)
   {
     printf("hay nhap vi tri can xoa 1 - %d: ",n);
         scanf("%d",&position);
         if (position > 0 && position <= n)
         {
            break;
         }     
    }
   for (int i = position -1; i < n; i++)
   {
    array[i] = array[i + 1];
   }
   n--;
    printf("Mang sau khi xoa: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");
    return 0;
}