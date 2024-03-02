#include <stdio.h>
#include <stdlib.h>

typedef struct Student {
    int id;
    char name[50];
    int score;
    struct Student *next;
} Student;

Student *insertStu(Student *head) {
    int id;
    head = (Student *) malloc(sizeof(Student));
    Student *newStudent;

    printf("请输入学生id(输入0表示结束):\n");
    while (scanf("%d", &id) && id != 0) {
        newStudent = (Student *) malloc(sizeof(Student));
        if (newStudent == NULL) {
            printf("内存分配失败\n");
            exit(EXIT_FAILURE);
        }
        newStudent->id = id;
        printf("请输入学生姓名:\n");
        scanf("%s", newStudent->name);
        printf("请输入学生成绩:\n");
        scanf("%d", &newStudent->score);
        newStudent->next = head->next;
        head->next = newStudent;
        printf("请输入学生id(输入0表示结束):\n");
    }
    return head;
}

void printStu(Student *head) {
    Student *p = head->next;
    while (p != NULL) {
        printf("id:%d\n", p->id);
        printf("name:%s\n", p->name);
        printf("score:%d\n", p->score);
        p = p->next;
    }
}

void select(Student *head, int sco) {
    Student *p = head->next;
    while (p != NULL) {
        if (p->score > sco) {
            printf("%d %s %d\n", p->id, p->name, p->score);
        }
        p = p->next;
    }
}


int main() {
    Student *stu_head = NULL;
    stu_head = insertStu(stu_head);
    printStu(stu_head);
    select(stu_head, 80);
    return 0;
}
