#include <stdio.h>
#include <limits.h>

int main(void) {
	//char 1����Ʈ (����)
	char ch = 'A';
	printf("char :\n");
	printf("Value: %c\n", ch);
	printf("Max: %d\n", CHAR_MAX);
	printf("Min: %d\n", CHAR_MIN);
	//singed short int 2����Ʈ (����)
	signed short int sshort = 1234;
	printf("\nsigned short int:\n");
	printf("Value: %d\n", sshort);
	printf("Max: %d\n", SHRT_MAX);
	printf("Min: %d\n", SHRT_MIN);
	//unsigned short int 2����Ʈ (����)
	unsigned short int ushort = 1234U;
	printf("\nunsigned short int:\n");
	printf("Value: %d\n", ushort);
	printf("Max: %d\n", USHRT_MAX);
	//signed int 4����Ʈ (����
	signed int sint = 1234;
	printf("\nsigned int:\n");
	printf("Value: %d\n", sint);
	printf("Max: %d\n", INT_MAX);
	printf("Max: %d\n", INT_MIN);
	//unsigned int 4����Ʈ (����)
	unsigned int uint = 12345U;
	printf("\nunsigned int:\n");
	printf("Value: %d\n", uint);
	printf("Max: %d\n", UINT_MAX);
	//signed long int 4����Ʈ (�Ǽ�)
	signed long int slong = 123456789L;
	printf("\nsigned int:\n");
	printf("Value: %d\n", slong);
	printf("Max: %d\n", LONG_MAX);
	printf("Max: %d\n", LONG_MIN);
	//unsigned long int 4����Ʈ (�Ǽ�)
	unsigned long int ulong = 12345U;
	printf("\nunsigned long int:\n");
	printf("Value: %d\n", ulong);
	printf("Max: %d\n", ULONG_MAX);
	// float (�׻� ��ȣ�� �ִ�) 4����Ʈ �Ǽ�
	float f = 123.456f;
	printf("\nfloat:\n"); 
	printf("Value :\n", f);
	//double (�׻� ��ȣ�ִ�) 8����Ʈ �Ǽ�
	double d = 123456.7890123f;
	printf("\ndouyble:\n");
	printf("Value :3f\n", d);
	//signed double 8����Ʈ (�Ǽ�)
	//unsigned double 8����Ʈ (�Ǽ�)
	
	return 0;
}