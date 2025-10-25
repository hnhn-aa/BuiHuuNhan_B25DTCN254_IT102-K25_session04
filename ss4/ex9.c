#include <stdio.h>

int main(){
	int ngay, thang, nam;
	int hople = 1;
	
	printf("Moi ban nhap ngay: ");
	scanf("%d",&ngay);
	printf("Moi ban nhap thang: ");
	scanf("%d",&thang);
	printf("Moi ban nhap nam: ");
	scanf("%d",&nam);
	
	if(thang<1 || thang>12){
		hople = 0;
	}else{
		int songaytrongthang;
		
		switch(thang){
			case 1:
				songaytrongthang = 31;
				break;
			case 3:
				songaytrongthang = 31;
				break;
			case 5:
				songaytrongthang = 31;
				break;
			case 7:
				songaytrongthang = 31;
				break;
			case 8:
				songaytrongthang = 31;
				break;
			case 10:
				songaytrongthang = 31;
				break;
			case 12:
				songaytrongthang = 31;
				break;
			case 4:
				songaytrongthang = 30;
				break;
			case 6:
				songaytrongthang = 30;
				break;
			case 9:
				songaytrongthang = 30;
				break;
			case 11:
				songaytrongthang = 30;
				break;
			case 2:
				if((nam%4==0 && nam%100!=0) || (nam%400==0))
				songaytrongthang = 29;
			else
				songaytrongthang = 28;
				break;
			default:
				printf("Sai dinh dang roi");
		}
		if(ngay<1 || ngay>songaytrongthang)
		hople = 0;
	}
	if(hople){
		printf("Ngay thang nam hop le");
	}else 
	printf("Ngay thang nam khong hop le");
	
	return 0;
}
