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

    printf("������ѧ��id(����0��ʾ����):\n");
    while (scanf("%d", &id) && id != 0) {
        newStudent = (Student *) malloc(sizeof(Student));
        if (newStudent == NULL) {
            printf("�ڴ����ʧ��\n");
            exit(EXIT_FAILURE);
        }
        newStudent->id = id;
        printf("������ѧ������:\n");
        scanf("%s", newStudent->name);
        printf("������ѧ���ɼ�:\n");
        scanf("%d", &newStudent->score);
        newStudent->next = head->next;
        head->next = newStudent;
        printf("������ѧ��id(����0��ʾ����):\n");
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
