#include<stdio.h>
void main()
{
	int A=20*4;
	int B=800/10;
	int stmt = !(A==B);
	printf("The A value is : %d\n",A);
	printf("The B value is : %d\n",B);

	stmt = !(A==B);
	printf("The output of stmt  is : %f", !(A==B));
}