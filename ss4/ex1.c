#include <stdio.h>

int main(){
	int n;
	printf("Moi ban nhap vao mot so nguyen : ");
	scanf("%d",&n);
	
	if(n<0){
		printf("So vua nhap la so am");
	}else if(n==0){
		printf("So vua nhap khong la so am khong la so duong");
	}else{
		printf("So vua nhap la so duong");
	}
	
	return 0;
}
