#include<stdio.h>
void main()
{
	int A=20;
	int B=20;
	int C=30;
	int D=40;
	int stmt = !(A+B)!=(C*D);
	printf("The A value is : %d\n",A);
	printf("The B value is : %d\n",B);
	printf("The C value is : %d\n",C);
	printf("The D value is : %d\n",D);

	stmt = !(A+B)!=(C*D);
	printf("The output of stmt  is : %d", !(A+B)==(C*D));
}