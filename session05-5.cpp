#include <stdio.h>

int main() {
	for(int i=0;i<=9;i++){
		printf("bang cu truong %d\n",i);
		for(int j =0;j<=9;j++){
			printf("%d x %d = %d\n",i,j,i*j);
		}
	}
    return 0;
}
