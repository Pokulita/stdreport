#include "course.h"
#include "student.h"
#include <iostream>
#include <stdexcept>
#include <map>
#include <vector>
#include <memory>
#include <algorithm>
using namespace std;

int main()
{
    // first tests
    vector<Course> vec;
    Course course1{"GHRTS", "GIS", 3};
    Course course2{"tHReS", "MGI1", 6};
    Course course3{"G4RbS", "PR2", 6};
    vec.push_back(course1);
    vec.push_back(course3);
    vec.push_back(course2);
    Student std1{"a12134181", "Mykyta", 19, 24, vec};

    cout << std1;
}