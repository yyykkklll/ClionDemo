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
    printf("������ѧ����Ϣ\n");
    Init_Student_info();
    Save_Student_info();
    Read_Student_info();
    return 0;
}

void Init_Student_info() {
    // ��ʼ��ѧ����Ϣ
    for (int i = 0; i < SIZE; i++) {
        scanf("%s %d %d %s", Student[i].name, &Student[i].number, &Student[i].age, Student[i].address);
    }
}

void Save_Student_info() {
    FILE *fp;
    if ((fp = fopen("student.dat", "wb")) == NULL) {
        printf("�޷����ļ�\n");
        return;
    }

    for (int i = 0; i < SIZE; i++) {
        if (fwrite(&Student[i], sizeof(struct Student_type), 1, fp) != 1) {
            printf("�޷�д���ļ�\n");
        }
    }

    fclose(fp);
    printf("�ļ�д��ɹ�\n");
}

void Read_Student_info() {
    FILE *fp;
    if ((fp = fopen("student.dat", "rb")) == NULL) {
        printf("�޷����ļ�\n");
        return;
    }

    for (int i = 0; i < SIZE; i++) {
        if (fread(&Student[i], sizeof(struct Student_type), 1, fp) != 1) {
            printf("�޷���ȡ�ļ�\n");
        } else {
            // ��ӡ��Ϣ
            printf("��Ϣ����:\n");
            printf("%s %d %d %s\n", Student[i].name, Student[i].number, Student[i].age, Student[i].address);
        }
    }

    fclose(fp);
    printf("�ļ���ȡ�ɹ�\n");
}
