#include<stdio.h>

int main(){
	int number;
	printf("hay nhap mot so tu nhien ");
	scanf("%d",&number);
	if(number % 2 ==0){
		printf("so %d la so chan",number);
		}
		else{
			printf("so %d la so le",number);
			}
			return 0;
}
