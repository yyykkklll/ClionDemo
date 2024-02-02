#include <stdio.h>

#define SIZE 1

struct Student_type {
    char name[10];
    int number;
    int age;
    char address[10];
} Student[SIZE];

void Init_Student_info();

void Save_Student_info();

void Read_Student_info();

int main() {
    printf("请输入学生信息\n");
    Init_Student_info();
    Save_Student_info();
    Read_Student_info();
    return 0;
}

void Init_Student_info() {
    // 初始化学生信息
    for (int i = 0; i < SIZE; i++) {
        scanf("%s %d %d %s", Student[i].name, &Student[i].number, &Student[i].age, Student[i].address);
    }
}

void Save_Student_info() {
    FILE *fp;
    if ((fp = fopen("student.dat", "wb")) == NULL) {
        printf("无法打开文件\n");
        return;
    }

    for (int i = 0; i < SIZE; i++) {
        if (fwrite(&Student[i], sizeof(struct Student_type), 1, fp) != 1) {
            printf("无法写入文件\n");
        }
    }

    fclose(fp);
    printf("文件写入成功\n");
}

void Read_Student_info() {
    FILE *fp;
    if ((fp = fopen("student.dat", "rb")) == NULL) {
        printf("无法打开文件\n");
        return;
    }

    for (int i = 0; i < SIZE; i++) {
        if (fread(&Student[i], sizeof(struct Student_type), 1, fp) != 1) {
            printf("无法读取文件\n");
        } else {
            // 打印信息
            printf("信息如下:\n");
            printf("%s %d %d %s\n", Student[i].name, Student[i].number, Student[i].age, Student[i].address);
        }
    }

    fclose(fp);
    printf("文件读取成功\n");
}
