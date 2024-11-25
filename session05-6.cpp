#include<stdio.h>

int main(){
	
	float so1,so2;
	int chon;
	printf(" moi nhap so nguyen thu nhat: ");
	scanf("%f",&so1);
	printf(" moi nhap so nguyen thu hai: ");
	scanf("%f",&so2);
	do{
	
        printf("1. Tong 2 so\n");
        printf("2. Hieu 2 so\n");
        printf("3. Tich 2 so\n");
        printf("4. Thuong 2 so\n");
        printf("5. Thoat\n");
        printf("Chon chuc nang (1-5): ");
        scanf("%d", &chon);	
	switch(chon){
		case 1:
			printf("tong %.2f + %.2f = %.2f\n",so1,so2,so1+so2);
			break;
		case 2:
			printf(" hieu %.2f - %.2f = %.2f\n",so1,so2,so1-so2);
			break;
		case 3:
			printf(" tich %.2f x %.2f = %.2f\n",so1,so2,so1*so2);
			break;
		case 4:
			printf(" thuong %.2f / %.2f = %.2f\n",so1,so2,so1/so2);
			break;
		case 5:
			printf(" thoat chuong trinh\n");
			break;
		default:
			printf("lua chon sai");
					
		
		
		}
	}while(chon !=5);
	
	return 0;
}
