#include<stdio.h>
int main(){
    int n,valu,position;
    int d = 0;
    int mang[d];
    while (1)
    {
        printf("MENU\n");
        printf("1. nhap vao mang\n");
        printf("2. hien thi mang\n");
        printf("3. them phan tu\n");
        printf("4. sua phan tu\n");
        printf("5. xoa phan tu\n");
        printf("6. thoat\n");
        do
        {
             printf("lua chon cua ban: ");
        scanf("%d",&n);
        } while (n < 1 || n > 6);
        
        if (n == 1)
        {
            printf("hay nhap do dai cau mang: ");
            scanf("%d",&d);
            int count = 1;
            for (int i = 0; i < d; i++)
            {
                printf("hay nhap gia tri cho phan tu %d: ",count);
                scanf("%d",&mang[i]);
                count++;
            }
        }else if (n == 2)
        {
            printf("mang cau bn la:");
            for (int i = 0; i < d; i++)
            {
                printf("%d ",mang[i]);
            }
            printf("\n");
        }else if (n == 3)
        {
           do
           {
            printf("hay nhap vi tri bn muon them: ");
             scanf("%d",&position);
           } while (position < 1 && position > d);
            printf("hay nhap gia tri bn muon them: ");
            scanf("%d",&valu);
            for (int i = d; i >= position; i--)
            {
                mang[i] = mang[i - 1];
            }
            mang[position-1] = valu;
            d++;
        }else if (n == 4)
        {
            do
            {
                printf("hay nhap vi tri bn muon sua: ");
                scanf("%d",&position);
            } while (position < 1 && position > d);
            
            printf("hay nhap gia tri bn muon sua: ");
            scanf("%d",&valu);
             mang[position-1] = valu;
        }else if (n == 5)
        {
            do
            {
                printf("hay nhap vi tri bn muon xoa: ");
                scanf("%d",&position);
            } while (position < 1 && position > d);
            
            for (int i = position-1; i < n; i++)
            {
                mang[i] = mang[i + 1];
            }
            d--;
        }else if (n == 6)
        {
           break;
        }
    }
    return 0;
}