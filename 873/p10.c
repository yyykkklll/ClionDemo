#include <stdio.h>
#include <malloc.h>

typedef struct Student {
    int id;
    char name[20];
    int score;
    struct Student *next;
} Student;

Student *insertTailStudent(Student *Stu) {
    int id;
    // ����ͷ�ڵ�
    Student *head = (Student *) malloc(sizeof(Student));
    if (head == NULL) {
        printf("malloc failed\n");
    }
    head->next = NULL;
    printf("������ѧ��id(����0��ʾ����):");
    while (scanf("%d", &id) && id != 0) {
        // �½��ڵ�
        Student *p = (Student *) malloc(sizeof(Student));
        if (p == NULL) {
            printf("malloc failed\n");
        }
        p->id = id;
        printf("������ѧ������:\n");
        scanf("%s", p->name);
        printf("������ѧ���ɼ�:\n");
        scanf("%d", &p->score);
        // ��������β�壩
        p->next = head->next;
        head->next = p;
        printf("������һ��ѧ��id(����0��ʾ����):\n");
    }
    return head;
}

Student *insertHeadStudent(Student *Stu) {
    int id;
    // ����ͷ�ڵ�
    Student *head = (Student *) malloc(sizeof(Student));
    if (head == NULL) {
        printf("malloc failed\n");
    }
    head->next = NULL;
    Student *p, *r = head;
    printf("������ѧ��id(����0��ʾ����)\n:");
    while (scanf("%d", &id) && id != 0) {
        // �½��ڵ�
        p = (Student *) malloc(sizeof(Student));
        if (p == NULL) {
            printf("malloc failed\n");
        }
        p->id = id;
        printf("������ѧ������:\n");
        scanf("%s", p->name);
        printf("������ѧ���ɼ�:\n");
        scanf("%d", &p->score);
        // ��������ͷ�壩
        r->next = p;
        r = p;
        printf("������һ��ѧ��id(����0��ʾ����):\n");
    }
    return head;
}

void printStudent(Student *head) {
    Student *p = head->next;
    while (p != NULL) {
        printf("id:%d\n", p->id);
        printf("name:%s\n", p->name);
        printf("score:%d\n", p->score);
        p = p->next;
    }
}

int main() {
    Student *Stu = NULL;
    Student *head = insertHeadStudent(Stu);
    printf("ѧ����Ϣ����:\n");
    printStudent(head);
    return 0;
}