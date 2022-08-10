//포인터와 함수의 관계

#include<Stdio.h>

void sub(int *b);

int main(void) {
	int a[3] = { 1,2,3 };

	printf("변경 전 : %d %d %d \n", a[0], a[1], a[2]);
	sub(a);
	printf("변경 후 : %d %d %d \n", a[0], a[1], a[2]);

	return 0;
}

void sub(int *b) { // void sub(int [b])
	b[0] = 4;
	b[1] = 5;
	b[2] = 6;
}