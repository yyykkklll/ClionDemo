/**
* @author yklsfzy
* @date 2024/2/2/0002 11:56:14
*/
#ifndef CPPDEMO_STUDENT_H
#define CPPDEMO_STUDENT_H

#include <string>
#include <iostream>

using namespace std;

class student {
private:
    string name;
    int age;
public:
    student() {
        cout << "�޲ι���";
    }

    student(string name, int age) {
        cout << "���ι���";
        this->name = name;
        this->age = age;
    }

public:
    string getName() {
        return name;
    }

    int getAge() {
        return age;
    }

    void setName(string name) {
        this->name = name;
    }

    void setAge(int age) {
        this->age = age;
    }
    void print() {
        cout << "����:" << name << " ����:" << age << endl;
    }
};


#endif //CPPDEMO_STUDENT_H
