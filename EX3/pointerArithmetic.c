#include<stdio.h> 

int main(void)
{
	float x;

	x = 5.5;
	float *p = &x;
	printf("Before the incriment : %p\n",p);
	p++;
	printf("After the incriment : %p\n",p);






}
