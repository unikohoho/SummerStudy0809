//pointer review

#include<stdio.h>

void swap(int x, int y);

int main(void) {

	int a = 100;
	int b = 200;

	printf("a = %d\nb = %d\n", a, b);

	swap(&a, &b);

	printf("a = %d\nb = %d\n", a, b);

	return 0;

}

void swap(int* px, int* py) {//�Ű������� ������ px�� ������ py�� ��
	int tmp;  //swap�� ���� �ӽ� int ���� tmp ����

	tmp = *px;//tmp���� ������ px�� ����Ű�� ���� �����
	*px = *py;//������ px�� ����Ű�� ���� ������ py�� ����Ű�� ������ �ٲ�
	*py = tmp;//������ py�� ����Ű�� ���� ������ px�� ����Ű�� ��, �� tmp�� �ٲ�

}
