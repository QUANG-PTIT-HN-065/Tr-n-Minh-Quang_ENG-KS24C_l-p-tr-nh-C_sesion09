#include<stdio.h>
int main(){
    int y,x,n;
    int mang[10][10];
    while (1)
    {
        printf("MENU\n");
        printf("1. nhap vao kich thuoc va gan gia tri\n");
        printf("2. in cac phan tu theo ma tran\n");
        printf("3. in cac phan tu le va tinh tong\n");
        printf("4. in cac phan tu nam tren duong bien va tinh tich\n");
        printf("5. in ra cac phan tu năm tren duong cheo chinh\n");
        printf("6. in ra cac phan tu tren duong cheo phu\n");
        printf("7. in ra dong co tong cac gia tri lon nhat\n");
        printf("8. thoat\n");
        do
        {
            printf("lua chon cua ban: ");
            scanf("%d",&n);
        } while (n < 1 || n > 8);
        if (n == 1 )
        {
            do
            {
                printf("hay nhap kich thuoc: ");
                scanf("%d",&x);
            } while (n < 1);
            y = x;
            mang[x][y];
            for (int i = 0; i < x; i++)
            {
                for (int j = 0; j < y; j++)
                {
                    printf("hay nhap gia trị cho hang: %d cot: %d: ",i,j);
                    scanf("%d",&mang[i][j]);
                }
            }
        }else if (n == 2)
        {
            for (int i = 0; i < x; i++)
            {
                for (int j = 0; j < y; j++)
                {
                    printf("%2d  ",mang[i][j]);
                }
                printf("\n");
            }
            
        }else if (n == 3)
        {
            int tong = 0;
            printf("cac so le la: ");
            for (int i = 0; i < x; i++)
            {
                for (int j = 0; j < y; j++)
                {
                    if (mang[i][j] % 2 != 0)
                    {
                        tong += mang[i][j];
                        printf("%2d  ",mang[i][j]);
                    }         
                }
            }
            printf("\n");
            printf("tong cua ca so le la: %d\n",tong);
        }else if (n == 4)
        {
            printf("ca phan tu nam tren duong bien la: ");
            long long tich = 1;
            for (int i = 0; i < x; i++)
            {
                for (int j = 0; j < y; j++) 
                {
                    if (i == 0 || i == n - 1 || j == 0 || j == n - 1)
                    {
                       tich *= mang[i][j];
                       printf("%2d  ",mang [i][j]);
                    }
                }
            }
            printf("\n");
            printf("tich cau ca phan tu tren duong bien la: %lld\n",tich);
        }else if (n == 5)
        {
            printf("ca phan tu tren duong cheo chinh la: ");
            for (int i = 0; i < x; i++)
            {
                for (int j = 0; j < y; j++)
                {
                    if (i == j)
                    {
                        printf("%d ",mang[i][j]);
                    }
                }
            }
            printf("\n");
        }else if (n == 6)
        {
            printf("ca phan tu tren duong cheo phu la: ");
            for (int i = 0; i < x; i++)
            {
                for (int j = 0; j < y; j++)
                {
                    if (i + j == x - 1)
                    {
                        printf("%d ",mang[i][j]);
                    }
                }
            }
            printf("\n");
        }else if (n == 7)
        {
            int num1 = -1e9;//lưu trũ giá lớn nhat
            int num2 = -1;//lưu trữ dòng có tổng lớn nhất
            for (int i = 0; i < x; i++) 
            {
                int num3 = 0;
                for (int j = 0; j < y; j++) 
                {
                    num3 += mang[i][j];
                }
                if (num3 > num1) 
                {
                   num1 = num3;
                   num2 = i;
                }
            }
            printf("dong co tong lon nhat la dong: %d \n",num2 + 1);
            for (int i = 0; i < x; i++)
            {
                printf("%2d  ",mang[num2][i]);
            }
            printf("\n");
        }else if (n == 8)
        {
            break;
        }
    }
    return 0;
}