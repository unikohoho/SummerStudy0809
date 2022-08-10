//배열의 이름은 포인터처럼 사용가능

#include<stdio.h>

int main(void) {
	int a[] = { 10,20,30,40 };

	printf("*a = %d\n", *a);//a[0]
	printf("*(a+1) = %d\n", *(a + 1));//a[1]
	printf("*(a+2) = %d\n", *(a + 2));//a[2]
	printf("*(a+3) = %d\n", *(a + 3));//a[3]

	for (int i = 0; i < 4; i++) {
		printf("%d\n", *(a + i));

	}


}