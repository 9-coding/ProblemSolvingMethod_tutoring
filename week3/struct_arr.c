#include <stdio.h>

struct student {
	int number;
	char name[10];
	double grade;
};

int main(void){

	struct student list[3]; // 구조체 배열 선언

	for (int i = 0;i < 3;i++) // 반복문 이용하여 각 구조체 변수의 멤버의 값을 입력받는다.
	{
		printf("학번: ");
		scanf("%d", list[i].number);
		printf("이름: ");
		scanf("%s", list[i].name);
		printf("학점: ");
		scanf("%lf", list[i].grade);
	}

	for (int i = 0;i < 3;i++)
		printf("\n이름: %s, 학점: %f \n", list[i].name, list[i].grade);

	return 0;
}