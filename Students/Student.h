#ifndef STUDENT_H
#define STUDENT_H

typedef struct {
    char* name;
    int age;
    float grade;
} Student;

#include "Student.c"
#define MAX_STRING_LENGTH 256

Student* createStudent(char* name, int age, float grade);
void setName(Student* student, char* name);
char* getName(Student student);
void setAge(Student* student, int age);
int getAge(Student student);
void setGrade(Student* student, float grade);
float getGrade(Student student);
void disposeStudent(Student* student);
void printStudent(Student student);
char* studentToCSV(Student student);
Student* createFromCSV(char* line);

#endif // STUDENT_H


