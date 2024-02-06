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

    // cout << std1;

    map<string, Student> std;
    std.insert(make_pair("12134181", std1));

    while (cin)
    {
        string action;
        cout << endl;
        cout << "Available actions" << endl;
        cout << endl
             << "view" << endl
             << "enrol" << endl
             << "exit" << endl;
        cout << endl
             << "Select an action: " << endl;
        cin >> action;
        cout << endl;
        if (action == "exit")
            break;
        if (action == "view")
        {
            for (const auto &s : std)
            {
                cout << s.second << endl;
            }
        }
        if (action == "enrol")
        {
            string mtrk;
            string name;
            int age;
            vector<Course> v;
            cout << "Enter matrikel nummer: ";
            cin >> mtrk;
            cout << "Enter the name: ";
            cin >> name;
            cout << "Enter age: ";
            cin >> age;
            std.insert(make_pair(mtrk, Student(mtrk, name, age, 0, v)));
        }
    }
}