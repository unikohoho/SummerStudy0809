//학생 10명의 점수를 입력 받아
//평균, 최대값, 최소값을 구해보자
//포인터 이용

#include<stdio.h>
#define SIZE 10

double get_avg(int* p, int n);
int get_max(int* p, int n);
int get_min(int* p, int n);

int main(void) {
	int scores[SIZE];
	for (int i = 0; i < SIZE; i++) {
		printf("학생 %d 점수 입력 : ", (i + 1));
		scanf("%d", &scores[i]);
	}
	int* ps = scores;

	double avg = get_avg(ps, SIZE);
	int max = get_max(ps, SIZE);
	int min = get_min(ps, SIZE);

	printf("점수 평균 = %.2lf\n", avg);
	printf("최고점수 = %d\n", max);
	printf("최저점수 = %d\n", min);

	return 0;
}
double get_avg(int* p, int n) {
	int sum = 0;

	for (int i = 0; i < n; i++)
		sum += *(p + i);

	return (double)sum / n;

}
int get_max(int* p, int n) {
	int max = *p;
	for (int i = 0; i < n; i++) {
		if (*(p + i) > max)
			max = *(p + i);
	}
	return max;

}
int get_min(int* p, int n) {
	int min = *p;
	for (int i = 0; i < n; i++) {
		if (*(p + i) < min)
			min = *(p + i);
	}
	return min;
}