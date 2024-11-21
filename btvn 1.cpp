#include <stdio.h>

int main(){
	
	char name[50];
	
	printf("Nhap ten cua ban vao day : ");
	fgets(name, sizeof(name), stdin);
	
	printf("Xin chao %s\n",name);	
	
	return 0;
}
