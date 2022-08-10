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

void swap(int* px, int* py) {//매개변수로 포인터 px와 포인터 py가 들어감
	int tmp;  //swap을 위한 임시 int 변수 tmp 설정

	tmp = *px;//tmp에는 포인터 px가 가리키는 것이 저장됨
	*px = *py;//포인터 px가 가리키는 것은 포인터 py가 가리키는 것으로 바뀜
	*py = tmp;//포인터 py가 가리키는 것은 포인터 px가 가리키던 것, 즉 tmp로 바뀜

}
