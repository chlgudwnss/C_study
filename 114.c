#include <stdio.h>
void main()
{

	int type, data;

	printf("�Է����� ���� <1>10 <2>16 <3>8 :");
	scanf_s("%d", &type);

	printf("�� �Է� :");

	if (type == 1)
	{
		scanf_s("%d", &data);
	}
	if (type == 2)
	{
		scanf_s("%x", &data);
	}
	if (type == 3)
	{
		scanf_s("%o", &data);
	}
	printf("10���� ==> %d \n", data);
	printf("16���� ==> %x \n", data);
	printf("8���� ==> %o \n", data);
}