#include<stdio.h>

int main(){
	int soNguyen;
	int ketQua;
	printf(" moi nhap 1 so nguyen duong");
	scanf("%d",&soNguyen);
	for(int i = 0; i <= soNguyen; i++){
		ketQua = ketQua + i;
		printf(" lap lan %d; thu duoc %d\n", i+1,ketQua);
	}
	printf("tong cac so tu 1 den %d la:%d",soNguyen,ketQua);
	 
	
	return 0;
}
