//�迭�� ������ : ����ڷκ��� 5������ ������ �Է� �޾� 
//�迭�� ������ �� �迭 ������ ���� ����Ͽ� ��ȯ�ϴ� �Լ� get_sum()����

#include<stdio.h>
#define SIZE 5

int get_sum(int a[]);

int main(void) {
	int data[SIZE];
	int value;
	printf("���� �Է� : ");
	for (int i = 0; i < SIZE; i++)
		scanf("%d", &data[i]);

	value = get_sum(data);

	printf("�� = %d\n", value);

	return 0;
}
int get_sum(int a[]) {
	int result = 0;
	for (int i = 0; i < SIZE; i++)
		result += a[i];

	return result;
}
