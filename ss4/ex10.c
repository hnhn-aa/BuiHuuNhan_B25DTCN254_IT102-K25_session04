#include <stdio.h>

int main(){
	int a, b, c, d;
	printf("Moi ban nhap so thu nhat: ");
	scanf("%d",&a);
	printf("Moi ban nhap so thu hai: ");
	scanf("%d",&b);
	printf("Moi ban nhap so thu ba: ");
	scanf("%d",&c);
	
	if (a > b) {
    	d = a;
        a = b;
        b = d;
    }
    if (a > c) {
        d = a;
        a = c;
        c = d;
    }
    if (b > c) {
        d = b;
        b = c;
        c = d;
    }

    printf("Thu tu tang dan: %d %d %d\n", a, b, c);
	
	return 0;
}
