#include "course.h"
#include "student.h"
#include <iostream>
#include <stdexcept>
#include <map>
#include <vector>
#include <memory>
#include <algorithm>

Student::Student(string matrikel_nummer, string name, int age, int ects, vector<Course> courses) : matrikel_nummer{matrikel_nummer}, name{name}, age{age}, ects{ects}, courses{courses}
{
    if (matrikel_nummer.size() != 9 || name.empty() || age < 0 || ects < 0)
    {
        throw runtime_error("Invalid arguments!");
    }
}

ostream &Student::print(ostream &o) const
{
    o << "Matrikelnummer: " << matrikel_nummer << ". Name: " << name << ". Age: " << age << ". Ects: " << ects << ". Courses: [";
    bool first{true};
    for (const auto &c : courses)
    {
        if (!first)
            o << ", ";
        o << c;
    }
    o << "]";
    return o;
}

std::ostream &operator<<(std::ostream &o, const Student &std)
{
    std.print(o);
    return o;
}
