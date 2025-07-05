#include<stdio.h>
void main()
{
	int A=20*4-40;
	int B=800/10+20;
	int stmt = !(A<B);
	printf("The A value is : %d\n",A);
	printf("The B value is : %d\n",B);

	stmt = !(A<B);
	printf("The output of stmt  is : %d", !(A<B));
}