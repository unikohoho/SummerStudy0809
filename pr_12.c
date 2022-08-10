//문자열과 포인터 

#include<stdio.h>

int main(void) {
	char s[] = "HelloWorld";
	char* p = "HelloWorld";

	s[0] = 'h';//배열은 원소 변경 가능
	//p[0] = 'h' : 오류!

	printf("포인터가 가리키는 문자열 = %s\n", p);
	p = "Goodbye";//문자열을 통째로 변경은 가능
	printf("포인터가 가리키는 문자열 = %s\n", p);

	return 0;

}