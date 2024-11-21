#include <stdio.h>

int main(){
	
	int number , sum = 0;
	
	printf("Nhap mot so nguyen co 4 chu so : ");
	
	scanf("%d", &number);
		
		sum += number % 10;
		number /= 10;
		sum += number % 10;
		number /=10;
	    sum += number % 10;
        number /= 10; 
	    sum += number; 
	    
	    printf(" tong cac chu so : %d\n", sum);
	    
	return 0;}
