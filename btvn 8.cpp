#include <stdio.h>

int main(){
	
	int number , reversed = 0; 
	
	printf("Nhap so nguyen co 4 chu so : ");
	scanf ("%d", &number);
	
	while (number !=0){
		reversed = reversed * 10 + number % 10; 
		number /=10;
	}
	
	printf("So nghich dao la : %d\n ",
	 reversed );
	
	return 0;
}
