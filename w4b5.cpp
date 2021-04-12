#include<stdio.h>
main(){
	int a;
	float b, c, d, PI;
	PI=3.14;
	printf("nhap ban kinh ban thich(cm):");
	scanf("%d", &a);
	printf("dien tich hinh tron tren la:%g cm^2\n", PI*a*a);
	printf("chu ci hinh tron la:%g cm\n", 2*a*PI);
	printf("the tich hinh cau co ban kinh %d la:%g cm^3", a, 4/3*PI*a*a*a);
	return 0;
}
