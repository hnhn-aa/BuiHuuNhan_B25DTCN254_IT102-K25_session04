#include <stdio.h>

int main(){
	int a, b, c;
	printf("Moi ban nhap canh a: ");
	scanf("%d", &a);
	printf("Moi ban nhap canh b: ");
	scanf("%d", &b);
	printf("Moi ban nhap canh c: ");
	scanf("%d", &c);
	
	if(a+b>c && a+c>b && b+c>a){
		printf("La 3 canh tam giac");
	}else
		printf("Khong phai 3 canh tam giac");
	
	return 0;
}
