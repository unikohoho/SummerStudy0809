//학생 10명의 점수를 입력받아 
//평균, 최대값, 최소값을 구해보자
//배열 이용

#include<stdio.h>
#define SIZE 10

double get_avg(int data[], int n);
int get_max(int data[], int n);
int get_min(int data[], int n);

int main(void) {
	int scores[SIZE];
	for (int i = 0; i < SIZE; i++) {
		printf("학생 %d 점수 입력 : ",(i+1));
		scanf("%d", &scores[i]);
	}
	double avg = get_avg(scores, SIZE);
	int max = get_max(scores, SIZE);
	int min = get_min(scores, SIZE);

	printf("점수 평균 = %.2lf\n", avg);
	printf("최고점수 = %d\n", max);
	printf("최저점수 = %d\n", min);

	return 0;

}
double get_avg(int data[], int n) {
	int sum = 0;
	for (int i = 0; i < n; i++)
		sum += data[i];

	return (double)sum / n;
}
int get_max(int data[], int n) {
	int max = data[0];
	for (int i = 1; i < n; i++) {
		if (data[i] > max)
			max = data[i];
	}
	return max;
}
int get_min(int data[], int n) {
	int min = data[0];
	for (int i = 1; i < n; i++) {
		if (data[i] < min)
			min = data[i];
	}
	return min;
}