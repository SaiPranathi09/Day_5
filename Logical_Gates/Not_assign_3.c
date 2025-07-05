#include<stdio.h>
void main()
{
	int A=40-20;
	int B=50%20;
	int stmt = !(A>B);
	printf("The A value is : %d\n",A);
	printf("The B value is : %d\n",B);

	stmt = !(A>B);
	printf("The output of stmt  is : %d", !(A>B));
}