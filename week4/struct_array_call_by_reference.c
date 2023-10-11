#include <stdio.h>
#include <string.h>

#define MAX 100 // 배열의 최대 크기

// EMPRECORD 구조체 정의
struct EMPRECORD {
    char name[20];
    int age;
    float salary;
    char hobby[3][20];
};

// 직원 정보를 업데이트하는 함수
void update_records(struct EMPRECORD emp[]) {
    emp[0].age = 25; // 첫 번째 직원의 나이를 25로 업데이트
}

int main() {
    // EMPRECORD 구조체 배열을 사용하여 직원 정보를 초기화합니다.
    struct EMPRECORD employee[MAX];

    // 여기에서 배열 employee의 요소를 초기화하는 코드를 추가할 수 있습니다.
    // 예를 들어, 첫 번째 직원의 정보를 초기화해보겠습니다.
    strcpy(employee[0].name, "John Doe");
    employee[0].age = 30;
    employee[0].salary = 50000.0;
    strcpy(employee[0].hobby[0], "Reading");
    strcpy(employee[0].hobby[1], "Hiking");
    strcpy(employee[0].hobby[2], "Cooking");

    // update_records 함수를 호출하여 배열의 첫 번째 요소에 접근하여 나이를 업데이트합니다.
    update_records(employee);

    // 업데이트된 첫 번째 직원 정보를 출력합니다.
    printf("Updated Employee Information:\n");
    printf("Name: %s\n", employee[0].name);
    printf("Age: %d\n", employee[0].age);
    printf("Salary: %.2f\n", employee[0].salary);
    printf("Hobbies: %s, %s, %s\n", employee[0].hobby[0], employee[0].hobby[1], employee[0].hobby[2]);

    return 0;
}
