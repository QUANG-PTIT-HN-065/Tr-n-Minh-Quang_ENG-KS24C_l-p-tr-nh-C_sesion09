#include<stdio.h>
int main(){
    int n,position,valu;
    int d,tong,count = 0;
    int mang[d];
    while (1)
    {
        printf("MENU\n");
        printf("1. nhap so phan tu can nhap va gan gi tri\n");
        printf("2. in ra cac phan tu dang quan ly\n");
        printf("3. in ra ca phan tu chan va tinh tong\n");
        printf("4. in ra gia trij nho nhat va lon nhat\n");
        printf("5. in ra phan tu la so nguyen to va tinh tong\n");
        printf("6. phan vao moi so va kiem tra co bao nhieu phan tu\n");
        printf("7. them phan tu vao vi tri chi dinh\n");
        printf("8. thoat\n");
        do
        {
             printf("lua chon cua ban: ");
        scanf("%d",&n);
        } while (n < 1 || n > 8);
        
        if (n == 1)
        {
            printf("hay nhap do dai cau mang: ");
            scanf("%d",&d);
            count = 1;
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
             tong = 0;
              printf("cac so chan trong mang la: \n");
            for (int i = 0; i < d; i++)
            {
                if (mang[i] % 2 == 0)
                {
                    printf("%2d",mang[i]);
                    tong += mang[i];
                }
            }
            printf("\n");
             printf("tong cau ca so chan la: %d\n", tong);
        }else if (n == 4)
        {
            int solon = 0;
            int sobe = 100000;
            for (int i = 0; i < d; i++)
            {
                if (mang[i] > solon)
                {
                    solon = mang[i];
                }
                if (mang[i]<sobe)
                {
                    sobe = mang[i];
                }
            }
            printf("so lon nhat trong mang la: %d\n",solon);
            printf("so be nhat trong mang la: %d\n",sobe);
        }else if (n == 5)
        {
            tong = 0;
            printf("cac so nguyen to la: ");
            for (int i = 0; i < d; i++)
            {
                int nguyento = 1;
                if (mang[i] <= 1)
                {
                    nguyento = 0;
                }else
                {
                    for (int j = 2; j * j <= mang[i]; j++)
                    {
                        if (mang[i] % j == 0)
                        {
                            nguyento = 0;
                            break;
                        }
                        
                    }
                    if (nguyento == 1)
                    {
                        printf("%2d",mang[i]);
                        tong += mang[i];
                    }
                }
            }
            printf("\n");
            printf("tong cac so nguyen to la: %d\n\n",tong);
        }else if (n == 6)
        {
            int num;
            count = 0;
           printf("hay nhap vao mot so bat ky: ");
           scanf("%d",&num);
           for (int i = 0; i < d; i++)
           {
            if (mang[i] == num)
            {
                count++;
            }
           }
           printf("trong mang co %d phan tu %d:\n",count,num);
        }else if (n == 7)
        {
             do
           {
            printf("hay nhap vi tri bn muon them: ");
             scanf("%d",&position);
           } while (position < 1 || position > d);
            printf("hay nhap gia tri bn muon them: ");
            scanf("%d",&valu);
            for (int i = d; i >= position; i--)
            {
                mang[i] = mang[i - 1];
            }
            mang[position-1] = valu;
            d++;
        }else if (n == 8)
        {
            break;
        }  
    }
    return 0;
}