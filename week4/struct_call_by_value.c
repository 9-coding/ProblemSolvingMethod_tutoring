#include <stdio.h>
#include <string.h>

struct EMPRECORD {
    char name[20];
    int age;
    float salary;
    char hobby[3][20];
};

struct EMPRECORD update_records(struct EMPRECORD emp) {
    emp.age = 25;
    return emp;
}

int main() {
    struct EMPRECORD employee;
    strcpy(employee.name, "John Doe");
    employee.age = 30;
    employee.salary = 50000.0;
    strcpy(employee.hobby[0], "Reading");
    strcpy(employee.hobby[1], "Hiking");
    strcpy(employee.hobby[2], "Cooking");

    struct EMPRECORD new_emp;

    new_emp = update_records(employee);

    printf("Updated Employee Information:\n");
    printf("Name: %s\n", new_emp.name);
    printf("Age: %d\n", new_emp.age);
    printf("Salary: %.2f\n", new_emp.salary);
    printf("Hobbies: %s, %s, %s\n", new_emp.hobby[0], new_emp.hobby[1], new_emp.hobby[2]);

    return 0;
}
