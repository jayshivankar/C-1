#include<stdio.h> 
int main () 
{ 
	int a; 
	printf("enter  the four digit number "); 
	scanf("%d",&a); 
	printf(" %d \n  %d \n   %d \n    %d",a,(a%1000),(a%100),(a%10)); 
	return 0;
	 
} 
