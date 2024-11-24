#include<stdio.h>

int main(){
	int dauthang, cuoithang, sodien, tiendien;
	printf("moi ban nhap vao so dien dau thang: ");
	scanf("%d",&dauthang);
	printf("moi ban nhap vao so dien dau thang: ");
	scanf("%d",&cuoithang);
	sodien= cuoithang - dauthang;
	printf("so dien cua ban la %d\n",sodien);
	if(sodien>=0 && sodien<50){
	tiendien = sodien * 10;
	printf("tien dien thang nay cua ban la: %d\n",tiendien);
	}
	else if(sodien>=50 && sodien<100){
		tiendien = sodien * 15;
		printf("tien dien thang nay cua ban la: %d\n",tiendien);
		}
		else if(sodien>=100 && sodien<150){
				tiendien = sodien * 20;
		printf("tien dien thang nay cua ban la: %d\n",tiendien);
		}
		else if(sodien>=150 && sodien<200){
				tiendien = sodien * 25;
		printf("tien dien thang nay cua ban la: %d\n",tiendien);
		}
		else if(sodien>=200){
				tiendien = sodien * 30;
		printf("tien dien thang nay cua ban la: %d\n",tiendien);
		}
		return 0;
}
	
