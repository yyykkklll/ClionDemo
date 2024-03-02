#include <stdio.h>
#inlude 
typedef struct Student
{
    int id;
    char name[20];
    int age;
    struct Student *next;
}Student;

Student *insertStudent(Student *stu){
    // 创建头节点
    int id;
    Student *p = (Student *)malloc(sizeof(Student));
    Student *newStudent = NULL;
    printf("请输入学生id(输入0表示结束):");
    while(scanf("%d",&id)&& id!=0){
        newStudent = (Student*)malloc(sizeof(Student));

    }
}


int main(){
    Student *stu;
    return 0;
}