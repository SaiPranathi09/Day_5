#include<stdio.h>
void main()
{
	int A=50;
	int B=20;
	float C=300;
	double D=10;
	int stmt = !(A%B)==(C/D);
	printf("The A value is : %d\n",A);
	printf("The B value is : %d\n",B);
	printf("The C value is : %f\n",C);
	printf("The D value is : %lf\n",D);

	stmt = !(A%B)==(C/D);
	printf("The output of stmt  is : %d", !(A%B)==(C/D));
}