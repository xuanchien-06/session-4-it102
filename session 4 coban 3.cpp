#include<stdio.h>

int main(){
	int number;
	printf("hay nhap mot so nguyen bat ki ");
	scanf("%d",&number);
	if(number%3==0 && number%5==0 ){
		printf("so %d chia het cho 3 va 5",number);
		}
		else if(number%3==0){
			printf("so %d chia het cho 3",number);
			}
		else if(number%5==0){
			printf("so %d chia het cho 5",number);
	     }
	     else{
	     	printf("so %d khong chia het cho 3 hoac 5",number);
	    
		 }
	     
	     return 0;
}
        
	
