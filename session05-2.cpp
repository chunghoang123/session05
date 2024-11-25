 #include<stdio.h>
 
 int main(){
 	int soNguyen = 30;
 	int so;
 	int kiemTra=0;
 	while(kiemTra ==0){
 		printf(" nhap vao so nguyen bat ky: ");
 		scanf("%d",&so);
 		
 		if(so > soNguyen){
 			printf("so nhap lon hon so can tim \n");
		 }else if( so < soNguyen){
		 	printf("so nhap nho hon so can tim \n");
		 }
		 else{
		 	printf(" so nhap chinh xac roi\n ");
		 	kiemTra =1;
		 }
	 }
 	
 	return 0;
 }
