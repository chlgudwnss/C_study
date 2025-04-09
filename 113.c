#include <stdio.h>
void main()
{
	int  data;

	printf("정수를 입력하세요. ==>");
	scanf_s("%d", &data);

	printf("10진수 ==> %d \n", data);
	printf("16진수 ==> %x \n", data);
	printf("8진수 ==> %o \n", data);
	
}