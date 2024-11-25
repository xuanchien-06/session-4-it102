#include<stdio.h>

int main(){
	//buoc 1: khai bao kieu du lieu cho a,b,c,temp;
	int a,b,c,temp;
	//buoc 2: nhap du lieu cho a,b,c tu nguoi dung
	printf("nhap so thu nhat: \n");
	scanf("%d",&a);
	printf("nhap so thu hai: \n");
	scanf("%d",&b);
	printf("nhap so thu ba: \n");
	scanf("%d",&c);
	//2.1: in kq sau khi nguoi dung nhap
	printf("truoc khi sap xep: %d %d %d \n",a,b,c);
	//buoc 3: xu lí tính toán
	
	//3.2: so sanh a>b 
	if(a>b){
		temp=a;
		a=b;
		b=temp;
		}
	//3.3: so sanh a>c
	if(a>c){
	    temp=a;
		a=c;
		c=temp;
		}
	//3.4: so sanh b>c
	if(b>c){
	    temp=b;
		b=c;
		c=temp;
		}
	//buoc 4: in ket qua ra sau khi sap xep
	printf("ket qua sau khi sap xep la: %d %d %d",a,b,c);
	//buoc 5: ket thuc chuong trinh
	
	
	
	return 0;
}
