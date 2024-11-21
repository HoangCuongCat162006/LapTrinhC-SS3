#include <stdio.h>
 
 int main(){
 	
 	float celsius, fahrenheit;
 	
 	printf("Moi ban nhap nhiet do Celsius: ");
 	scanf ("%f", &celsius);
 	
 	fahrenheit = (celsius * 9 / 5 ) +32;
 	
 	printf ("Nhiet do %.2f do Celsius tuong ung la %2.f do Fahrenheit \n",celsius , fahrenheit);
 	
 	return 0;
 }
