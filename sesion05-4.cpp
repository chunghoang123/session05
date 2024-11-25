#include<stdio.h>

int main(){
	int so;

	printf(" moi nhap so nguyen duong tu 1 den 10: ");
	scanf("%d", &so);
	for(int i=0 ; i <= 10; i++){
		for(int j =0;j<=10;j++){
			printf("%d x %d = %d\n",so,j,so*j);
		}
		break;
	}
	
	
	
	
	return 0;
}
