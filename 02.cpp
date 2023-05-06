#include<stdio.h>
#define size 5
int* p_a;
int* p_b;
int a[size]={1,2,3,4,5};
int b[size]={9,8,7,6,5};
//数组间的求差 
int main() 
{
	p_a=&a[1];
	p_b=&a[3];
	printf("%d\n",p_b-p_a);//同数组中，元素位置的差值;
	printf("%d,%d\n",p_b,p_a); 
	
	p_a=&a[1];
	p_b=&b[1];
	printf("%d\n",p_b-p_a);//不同数组中，元素位置的差值;
	printf("%d,%d\n",p_b,p_a); 
	return 0;
}
