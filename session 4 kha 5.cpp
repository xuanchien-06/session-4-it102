#include<stdio.h>

int main(){
	int songuyen;
	int hangtram;
	int hangchuc;
	int hangdonvi;
	printf("moi ban nhap so nguyen co 3 chu so: ");
	scanf("%d",&songuyen);
	hangtram = ((songuyen / 100) % 10);
	hangchuc = ((songuyen / 10) % 10);
	hangdonvi = songuyen%10;
	if(hangchuc<hangdonvi<hangtram){
		printf("so thu 3 nam giua so dau va so cuoi ");
		} else{
			printf("so thu 3 khong nam giua so dau va so cuoi");
			}
			return 0;
}
		
	
