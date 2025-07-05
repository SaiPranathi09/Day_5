#include<stdio.h>
void main()
{
	int A=4;
	float B=10/3;
	int stmt = !(A>=B);
	printf("The A value is : %d\n",A);
	printf("The B value is : %f\n",B);

	stmt = !(A>=B);
	printf("The output of stmt  is : %d", !(A>=B));
}