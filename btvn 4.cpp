#include <stdio.h>

int main(){
	float math,literature,english,total,average;
	
	
	printf("Nhap diem Toan: ");
	scanf( "%f", &math);
	
	printf ( "Nhap diem van :" );
	scanf( "%f", &literature);
	
	printf("Nhap diem anh :");
	scanf("%f", &english);
	 
	total = math + literature + english;
	
	average = total / 3;  
	
	printf("tong diem la : %2.f\n ", total);
	printf("diem trung binh la : %2.f\n ",average);
	
	
	return 0;
}
