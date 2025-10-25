#include <stdio.h>

int main(){
	int namhientai = 2025;
	int namsinh, tuoi;
	float diem;
	printf("Moi ban nhap nam sinh: ");
	scanf("%d",&namsinh);
	printf("Moi ban nhap diem: ");
	scanf("%f",&diem);
	if(namsinh<1900 || namsinh>namhientai){
		printf("Nam sinh khong hop le");
	}else{
		printf("Thong tin sinh vien:\n");
		printf("Nam sinh: %d\n",namsinh);
		tuoi = namhientai - namsinh;
		printf("Tuoi: %d\n",tuoi);
		}
		if(diem<5){
			printf("Hoc luc: Yeu");
		}else if(diem<6.5){
			printf("Hoc luc: Trung binh");
		}else if((diem<8)){
			printf("Hoc luc: Kha");
		}else{
			printf("Hoc luc: Gioi");
		}
	
	return 0;
}
