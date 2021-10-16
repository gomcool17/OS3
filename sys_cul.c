/* system call을 통해 +, -, *, % 연산을 하는 프로그램
1. 띄어쓰기 비허용

*/
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <linux/kernel.h>
#include <sys/syscall.h>
#include <unistd.h>

#define BUFFER_SIZE 100
int main()
{
	int a,b;
	char c;
	printf("put>> ");
	scanf("%d%c%d",&a, &c,&b);

	int result = 0;

	switch(c) {
	case '+' : 
		syscall(442,a,b, &result);
		break;
	case '-' : 
		syscall(443,a,b, &result);
		break;
	case '*': 
		syscall(444,a,b, &result);
		break;
	case '%' :
		syscall(445,a,b, &result);
		break;
	default :
	printf("연산식이 잘못되었거나 띄어쓰기를 사용했습니다.\n");
	printf("+,-,*,%%기호만 사용하세요. 띄어서 식을 쓰지 마세요.\n");
	exit(0);
	break;
	}

	printf("ans>>  %d\n",  result);

}
