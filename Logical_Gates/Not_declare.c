#include<stdio.h>
void main()
{
	int num_1;
	float num_2;
	int stmt;

	printf("Enter the num_1 value :");
	scanf("%d",&num_1);
	printf("The num_1 value is : %d\n", num_1);
	
	printf("Enter the num_2 value :");
	scanf("%f",&num_2);
	printf("The num_2 value is : %f\n",num_2);

	stmt = !(num_1<num_2);
	printf("The output of stmt  is : %f", !(num_1>num_2));
}