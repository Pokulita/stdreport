
#include "course.h"
#include <iostream>
#include <stdexcept>
#include <map>
#include <string>
#include <vector>
#include <memory>
#include <algorithm>

Course::Course(CourseN num = CourseN::END) : num{num}
{
    switch (num)
    {
    case CourseN::PR1:
        Course::name = "Programming 1";
        Course::ects_value = 6;
        break;
    case CourseN::TGI:
        Course::name = "Technical Foundations of Computer Science";
        Course::ects_value = 6;
        break;
    case CourseN::MG1:
        Course::name = "Mathematical Foundations of Computer Science 1";
        Course::ects_value = 6;
        break;
    case CourseN::THI:
        Course::name = "Theoretical Computer Science";
        Course::ects_value = 6;
        break;
    case CourseN::PR2:
        Course::name = "Programming 2";
        Course::ects_value = 6;
        break;
    case CourseN::MOD:
        Course::name = "Modelling";
        Course::ects_value = 6;
        break;
    case CourseN::OS:
        Course::name = "Operating Systems";
        Course::ects_value = 6;
        break;
    case CourseN::ADS:
        Course::name = "Algorithms and Data Structures";
        Course::ects_value = 6;
        break;
    case CourseN::IDS:
        Course::name = "Intelligent and Database Systems";
        Course::ects_value = 9;
        break;
    case CourseN::PLC:
        Course::name = "Programming Languages and Concepts";
        Course::ects_value = 6;
        break;
    case CourseN::SE1:
        Course::name = "Software Engineering 1";
        Course::ects_value = 6;
        break;
    case CourseN::SE2:
        Course::name = "Software Engineering 2";
        Course::ects_value = 6;
        break;
    case CourseN::NET:
        Course::name = "Network Technologies";
        Course::ects_value = 9;
        break;
    case CourseN::RGG:
        Course::name = "Legal and Societal Aspects";
        Course::ects_value = 6;
        break;
    case CourseN::HCI:
        Course::name = "Human-Computer-Interaction";
        Course::ects_value = 9;
        break;
    case CourseN::MG2:
        Course::name = "Mathematical Foundations of Computer Science 2";
        Course::ects_value = 6;
        break;
    case CourseN::NUM:
        Course::name = "Introduction to Numerical Computing";
        Course::ects_value = 6;
        break;
    case CourseN::EST:
        Course::name = "Introductory Statistics";
        Course::ects_value = 6;
        break;
    case CourseN::MM:
        Course::name = "Introduction to Mathematical Modelling";
        Course::ects_value = 6;
        break;
    case CourseN::W1:
        Course::name = "Specialisation";
        Course::ects_value = 30;
        break;
    case CourseN::W2:
        Course::name = "Extensions";
        Course::ects_value = 15;
        break;
    case CourseN::BA:
        Course::name = "Practical Software Course including the Bachelor´s Thesis";
        Course::ects_value = 12;
        break;
    case CourseN::END:
        throw runtime_error("No nummer was entered;");
        break;
    }
}

vector<string> co{"PR1",
                  "TGI",
                  "MG1",
                  "THI",
                  "PR2",
                  "MOD",
                  "OS",
                  "ADS",
                  "IDS",
                  "PLC",
                  "SE1",
                  "SE2",
                  "NET",
                  "RGG",
                  "HCI",
                  "MG2",
                  "NUM",
                  "EST",
                  "MM",
                  "W1",
                  "W2",
                  "BA",
                  "END"};

ostream &Course::print(ostream &o) const
{
    o << "[Course nummer: " << co.at(static_cast<int>(num)) << ", name: " << name << ", ects value: " << ects_value << "]";
    return o;
}

void print_all()
{
}

std::ostream &operator<<(std::ostream &o, const Course &c)
{
    c.print(o);
    return o;
}
