#include <stdio.h>
#include <string.h>

struct EMPRECORD {
    char name[20];
    int age;
    float salary;
    char hobby[3][20];
};

void update_records(struct EMPRECORD *emp) {
    (*emp).age = 22;
    emp->salary = 99.99;
}

int main() {
    struct EMPRECORD employee;
    strcpy(employee.name, "Koo");
    employee.age = 30;
    employee.salary = 50000.0;
    strcpy(employee.hobby[0], "Reading");
    strcpy(employee.hobby[1], "Hiking");
    strcpy(employee.hobby[2], "Cooking");

    update_records(&employee);

    printf("Updated Employee Information:\n");
    printf("Name: %s\n", employee.name);
    printf("Age: %d\n", employee.age);
    printf("Salary: %.2f\n", employee.salary);
    printf("Hobbies: %s, %s, %s\n", employee.hobby[0], employee.hobby[1], employee.hobby[2]);

    return 0;
}
