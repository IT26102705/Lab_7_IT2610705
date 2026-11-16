#include<stdio.h>
#include<math.h>
#define pi 3.14159

void calculate_circle(float radius , float *circumference , float *area);

int main(void)
{
	float area;
	float circumference;
	float radius;
	
	printf("Enter a value for radius: ");
	scanf("%f",&radius);

	//pointers 
	float *c_ptr = &circumference;
	float *a_ptr = &area;
	//calling function
	calculate_circle(radius,&circumference,&area);

	printf("Circumference is : %f\n ",circumference);
	printf("Area is : %f\n",area);

	return 0;

}


//function 
void calculate_circle(float radius , float *circumference , float *area)
{

	*circumference =  2.0 * pi * radius;
	*area = pi * radius * radius;
}
	       


