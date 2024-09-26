#include <stdio.h>

void main() {
	int num, sub_num;
	char oper;

	printf("계산기를 시작합니다.\n\n");

	printf("계산할 숫자를 입력해 주세요.\n");
	scanf_s("%d", &num);
	printf("현재 결과값: %d\n\n", num);
	
	while (1) {
		
		printf("계산할 연산자를 입력해 주세요.(+,*,-,/,=)\n");
		scanf_s(" %c", &oper, 1);

		if (oper == '+') {
			printf("계산할 숫자를 입력해 주세요.\n");
			scanf_s("%d", &sub_num);
			num = num + sub_num; //값 누적
			printf("현재 결과값: %d\n\n",num);
		}
		else if (oper == '-') {
			printf("계산할 숫자를 입력해 주세요.\n");
			scanf_s("%d", &sub_num);
			num = num - sub_num; //값 누적
			printf("현재 결과값: %d\n\n", num);
		}
		else if (oper == '*') {
			printf("계산할 숫자를 입력해 주세요.\n");
			scanf_s("%d", &sub_num);
			num = num * sub_num; //값 누적
			printf("현재 결과값: %d\n\n", num);
		}
		else if (oper == '/') {
			printf("계산할 숫자를 입력해 주세요.\n");
			scanf_s("%d", &sub_num);
			num = num / sub_num; //값 누적
			printf("현재 결과값: %d\n\n", num);
		}
		else if (oper == '=') {
			printf("최종 결과값: %d\n\n", num);
			printf("계산기를 종료합니다.\n\n");
			return;
		}
		else {
			printf("[ERROR]\n");
		}
	

	}
}