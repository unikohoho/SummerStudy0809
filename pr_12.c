//���ڿ��� ������ 

#include<stdio.h>

int main(void) {
	char s[] = "HelloWorld";
	char* p = "HelloWorld";

	s[0] = 'h';//�迭�� ���� ���� ����
	//p[0] = 'h' : ����!

	printf("�����Ͱ� ����Ű�� ���ڿ� = %s\n", p);
	p = "Goodbye";//���ڿ��� ��°�� ������ ����
	printf("�����Ͱ� ����Ű�� ���ڿ� = %s\n", p);

	return 0;

}