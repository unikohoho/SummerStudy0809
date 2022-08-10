//배열과 포인터 : 사용자로부터 5과목의 점수를 입력 받아 
//배열에 저장한 후 배열 원소의 합을 계산하여 반환하는 함수 get_sum()실행

#include<stdio.h>
#define SIZE 5

int get_sum(int a[]);

int main(void) {
	int data[SIZE];
	int value;
	printf("점수 입력 : ");
	for (int i = 0; i < SIZE; i++)
		scanf("%d", &data[i]);

	value = get_sum(data);

	printf("합 = %d\n", value);

	return 0;
}
int get_sum(int a[]) {
	int result = 0;
	for (int i = 0; i < SIZE; i++)
		result += a[i];

	return result;
}
