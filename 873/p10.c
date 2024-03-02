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
    // 创建头节点
    Student *head = (Student *) malloc(sizeof(Student));
    if (head == NULL) {
        printf("malloc failed\n");
    }
    head->next = NULL;
    printf("请输入学生id(输入0表示结束):");
    while (scanf("%d", &id) && id != 0) {
        // 新建节点
        Student *p = (Student *) malloc(sizeof(Student));
        if (p == NULL) {
            printf("malloc failed\n");
        }
        p->id = id;
        printf("请输入学生姓名:\n");
        scanf("%s", p->name);
        printf("请输入学生成绩:\n");
        scanf("%d", &p->score);
        // 插入链表（尾插）
        p->next = head->next;
        head->next = p;
        printf("输入下一个学生id(输入0表示结束):\n");
    }
    return head;
}

Student *insertHeadStudent(Student *Stu) {
    int id;
    // 创建头节点
    Student *head = (Student *) malloc(sizeof(Student));
    if (head == NULL) {
        printf("malloc failed\n");
    }
    head->next = NULL;
    Student *p, *r = head;
    printf("请输入学生id(输入0表示结束)\n:");
    while (scanf("%d", &id) && id != 0) {
        // 新建节点
        p = (Student *) malloc(sizeof(Student));
        if (p == NULL) {
            printf("malloc failed\n");
        }
        p->id = id;
        printf("请输入学生姓名:\n");
        scanf("%s", p->name);
        printf("请输入学生成绩:\n");
        scanf("%d", &p->score);
        // 插入链表（头插）
        r->next = p;
        r = p;
        printf("输入下一个学生id(输入0表示结束):\n");
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
    printf("学生信息如下:\n");
    printStudent(head);
    return 0;
}