#include<stdio.h>
//function for swapping two variables
void swap(int *x, int *y)
{
	int z; //tempory variable for swapping

	z = *x;
	*x = *y;
	*y = z;
}


int main(void)
{
	int a;
	int b;

	//input values for variables

	printf("Enter value for a : \n");
	scanf("%d",&a);
	printf("Enter value for b : \n");
	scanf("%d",&b);

	//function calling
	swap(&a,&b);

	//get the ouput
	printf("a : %d\n",a);
	printf("b : %d\n",b);



}
