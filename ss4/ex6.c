#include <stdio.h>

int main(){
	int chisocu, chisomoi;
	int sodien;
	long tiendien;
	
	printf("Moi ban nhap chi so cu : ");
	scanf("%d", &chisocu);
	printf("Moi ban nhap chi so moi : ");
	scanf("%d", &chisomoi);
	sodien = chisomoi - chisocu;
	
	if(sodien<0){
		printf("Loi : chi so moi phai lon hon chi so cu");
	return 1;
	}

	
	if(sodien<50)
		tiendien = sodien * 10000;
	else if(sodien<100)
		tiendien = 50 * 10000 + (sodien - 50) * 15000;
	else if(sodien<150)
		tiendien = 50 * 10000 + 50 * 15000 + (sodien - 100) * 20000;
	else if(sodien<200)
		tiendien = 50 * 10000 + 50 * 15000 + (sodien - 150) * 25000;
	else
		tiendien = 50 * 10000 + 50 * 15000 + (sodien - 200) * 30000;
	printf("So dien tieu thu: %d kWh\n", sodien);
	printf("Tien dien phai tra: %ld VND", tiendien);
	
	return 0;
}
