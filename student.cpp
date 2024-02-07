#include "course.h"
#include "student.h"
#include <iostream>
#include <stdexcept>
#include <map>
#include <vector>
#include <memory>
#include <algorithm>

vector<string> co{"PR1", "TGI", "MG1", "THI", "PR2", "MOD", "OS", "ADS", "IDS", "PLC", "SE1", "SE2", "NET", "RGG", "HCI", "MG2", "NUM", "EST", "MM", "W1", "W2", "BA"};

Student::Student(string matrikel_nummer, string name, int age) : matrikel_nummer{matrikel_nummer}, name{name}, age{age}
{
    if (matrikel_nummer.size() != 9 || name.empty() || age < 0)
    {
        throw runtime_error("Invalid arguments!");
    }
    // varvar
    for (const auto &c : co)
    {
        this->available_courses.insert(make_pair(c, Course(c)));
    }
}

void Student::print_available()
{
    for (const auto &a : available_courses)
    {
        cout << "-- " << a.second << endl;
    }
}

void Student::course_register(string c)
{
    current_courses.insert(make_pair(c, Course(c)));
    available_courses.erase(c);
}

ostream &Student::print(ostream &o) const
{
    o << "Matrikelnummer: " << matrikel_nummer << ". Name: " << name << ". Age: " << age << ". Ects: " << ects << ". Courses: [";
    bool first{true};
    for (const auto &c : current_courses)
    {
        if (!first)
            o << ", ";
        o << c.second;
    }
    o << "]";
    return o;
}

std::ostream &operator<<(std::ostream &o, const Student &std)
{
    std.print(o);
    return o;
}
