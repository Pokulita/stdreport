#include "student.h"
#include "course.h"
#include <iostream>
#include <stdexcept>
#include <map>
#include <vector>
#include <memory>
#include <unistd.h>
#include <algorithm>
using namespace std;

int main()
{
    // first tests
    vector<Course> vec;
    Course course1(CourseN::ADS);
    // Course course2{"tHReS", "MGI1", 6};
    // Course course3{"G4RbS", "PR2", 6};
    vec.push_back(course1);
    // vec.push_back(course3);
    // vec.push_back(course2);
    Student std1{"a12134181", "Mykyta", 19, 24, vec};

    // cout << std1;

    map<string, Student> std;
    std.insert(make_pair("a12134181", std1));

    while (cin)
    {
        string action;
        sleep(1);
        cout << endl;
        cout << "Available actions" << endl;
        cout << endl
             << "view" << endl
             << "enrol" << endl
             << "select" << endl
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
            if (mtrk.size() != 9)
            {
            }
            cout << "Enter the name: ";
            cin >> name;
            cout << "Enter age: ";
            cin >> age;
            std.insert(make_pair(mtrk, Student(mtrk, name, age, 0, v)));
        }
        if (action == "select")
        {
            cout << "Enter matrikel nummer: ";
            string s;
            cin >> s;
            if (std.count(s) != 0)
            {
                cout << std.find(s)->second << endl;
                while (cin)
                {
                    string std_action;
                    cout << endl;
                    cout << "Available actions" << endl;
                    cout << endl
                         << "!view" << endl
                         << "!enrol" << endl
                         << "!select" << endl
                         << "exit" << endl;
                    cout << endl
                         << "Select an action: " << endl;
                    cin >> std_action;
                    cout << endl;
                    if (std_action == "exit")
                        break;
                }
            }
            else
            {
                cout << "No student was found!";
            }
        }
    }
}