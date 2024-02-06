#ifndef COURSE_H
#define COURSE_H
#include <iostream>
#include <string>
#include <vector>

using namespace std;

enum CourseN
{
    PR1,
    TGI,
    MG1,
    THI,
    PR2,
    MOD,
    OS,
    ADS,
    IDS,
    PLC,
    SE1,
    SE2,
    NET,
    RGG,
    HCI,
    MG2,
    NUM,
    EST,
    MM,
    W1,
    W2,
    BA,
    END
};

class Course
{
private:
    CourseN num;
    string name;
    int ects_value;

public:
    Course(CourseN num);
    ostream &print(ostream &o) const;
};

std::ostream &operator<<(std::ostream &o, const Course &c);

#endif
