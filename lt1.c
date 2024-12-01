#include <stdio.h>
int main() {
    int array[100];
    int n, value, position;

    // Nhập số phần tử của mảng
    while (1) {
        printf("Nhap so phan tu muon nhap 1 - 100 ");
        scanf("%d", &n);
        if (n > 0 && n <= 100) {
            break; // Thoát vòng lặp nếu hợp lệ
        } else {
            printf("Gioi han tu 1 den 100 Vui long nhap lai\n");
        }
    }

    // Nhập các phần tử của mảng
    printf("Nhap cac phan tu cua mang\n");
    for (int i = 0; i < n; i++) {
        printf("Phan tu thu %d ", i + 1);
        scanf("%d", &array[i]);
    }

    // Hiển thị mảng ban đầu
    printf("Mang sau khi nhap ");
    for (int i = 0; i < n; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");

    // Nhập giá trị cần thêm
    printf("Nhap gia tri can them ");
    scanf("%d", &value);

    // Nhập vị trí muốn thêm phần tử
    while (1) {
        printf("Nhap vi tri muon them bat dau tu 1 den %d ", n + 1);
        scanf("%d", &position);
        if (position > 0 && position <= n + 1) {
            break; // Thoát vòng lặp nếu hợp lệ
        } else {
            printf("Vi tri khong hop le Vui long nhap lai\n");
        }
    }

    // Dịch các phần tử sang phải để chèn giá trị mới
    for (int i = n; i >= position; i--) {
        array[i] = array[i - 1];
    }

    // Chèn giá trị vào vị trí được chỉ định
    array[position - 1] = value;
    n++;

    // Hiển thị mảng sau khi chèn
    printf("Mang sau khi chen ");
    for (int i = 0; i < n; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");
    return 0;
}
