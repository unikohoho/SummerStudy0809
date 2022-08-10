//포인터와 배열의 관계

#include<stdio.h>

int main(void) {

	int a[] = { 10, 20, 30, 40 };

	printf("&a[0] = %p\n", &a[0]);//배열 a의 0번째 인덱스 주소
	printf("&a[1] = %p\n", &a[1]);//배열 a의 1번째 인덱스 주소
	printf("&a[2] = %p\n", &a[2]);//배열 a의 2번째 인덱스 주소
	printf("&a[3] = %p\n", &a[3]);//배열 a의 4번째 인덱스 주소

	printf("a = %p\n", &a);//배열 a의 주소는 배열 a의 0번째 인덱스 주소와 같음

	return 0;


}