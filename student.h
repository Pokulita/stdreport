#ifndef STUDENT_H
#define STUDENT_H
#include <iostream>
#include <string>
#include <vector>
#include "course.h"

using namespace std;

class Student
{
private:
    string matrikel_nummer;
    string name;
    int age;
    int ects;
    vector<Course> courses;

public:
    Student(string matrikel_nummer, string name, int age, int ects, vector<Course> courses);
    ostream &print(ostream &o) const;
};

std::ostream &operator<<(std::ostream &o, const Student &std);

#endif