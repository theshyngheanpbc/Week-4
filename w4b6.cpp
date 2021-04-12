#include<stdio.h>
main(){
	int a;
	printf("nhap so gio lam viec cua ban tuan nay:");
	scanf("%d", &a);
	if (a<=40){
	printf("so tien ban nhan duoc la:%d VND", 25000*a);
	} else {
		printf("so tien ban nhan duoc la:%d VND", 40*25000+(a-40)*40000);
	}
	return 0;
}
