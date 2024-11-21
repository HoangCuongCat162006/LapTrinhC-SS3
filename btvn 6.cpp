#include <stdio.h>

int main(){
	
	float base , height , area;
	
	printf("do dai canh day cua tam giac la :");
	scanf("%f",&base);
	
	printf("chieu cao cua tam giac la : ");
	scanf("%f",&height);
	
	area = 0.5 *base * height;
	
	printf("dien tich tam giac la : %.2f\n ", area);
	
	return 0;
}
