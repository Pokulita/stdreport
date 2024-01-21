#include "course.h"
#include <iostream>
#include <stdexcept>
#include <map>
#include <vector>
#include <memory>
#include <algorithm>

Course::Course(string course_nummer, string name, int ects_value) : course_nummer{course_nummer}, name{name}, ects_value{ects_value}
{
    if (course_nummer.size() != 5 || name.empty() || ects_value < 0)
    {
        throw runtime_error("Invalid arguments!");
    }
}

ostream &Course::print(ostream &o) const
{
    o << "[Course nummer: " << course_nummer << ", name: " << name << ", ects value: " << ects_value << "]";
    return o;
}

std::ostream &operator<<(std::ostream &o, const Course &c)
{
    c.print(o);
    return o;
}