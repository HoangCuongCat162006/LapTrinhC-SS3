#include <stdio.h>
#define PI 3.14159

int main (){
	
  float r, circumference , area;
  
  printf ("Moi ban nhap ban kinh hinh tron :");
  
  scanf("%f", &r);
  
  
  circumference = 2 * PI * r;
  area = PI * r * r;
  
  printf ("Chu vi hinh tron la : %2.f\n" , circumference);
  printf ("Dien tich hinh tron la : %2.f\n" , area );
  
  return 0;
}
