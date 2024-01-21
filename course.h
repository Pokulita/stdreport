#ifndef COURSE_H
#define COURSE_H
#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Course
{
private:
    string course_nummer;
    string name;
    int ects_value;

public:
    Course(string course_nummer, string name, int ects_value);
    ostream &print(ostream &o) const;
};

std::ostream &operator<<(std::ostream &o, const Course &c);

#endif