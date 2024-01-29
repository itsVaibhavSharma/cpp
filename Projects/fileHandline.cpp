#include <iostream>
#include <fstream>
#include <iomanip>
#include <string.h>
using namespace std;
int main()
{

    fstream fw;
    fw.open("testfile.txt", ios::out);
    fw << "STRUCTURE IN FILE HANDLING" << endl;

    struct student
    {
        string name;
        int roll;
        int cppmarks;
        float attendence;
        float cgpa;
    } s1, s2;

    s1.name = "Vaibhav Sharma";
    s1.roll = 69;
    s1.cppmarks = 100;
    s1.attendence = 100;
    s1.cgpa = 10;

    s2.name = "Jeet Bhardwaj";
    s2.roll = 32;
    s2.cppmarks = 100;
    s2.attendence = 80;
    s2.cgpa = 9.8;

    fw.setf(ios::left);
    fw << "    " << setw(20) << "Name" << setw(15) << "Roll" << setw(15) << "CppMarks" << setw(15) << "Attendence" << setw(15) << "CGPA" << endl;
    fw << setw(25) << s1.name << setw(15) << s1.roll << setw(15) << s1.cppmarks << setw(15) << s1.attendence << setw(15) << s1.cgpa << endl;
    fw << setw(25) << s2.name << setw(15) << s2.roll << setw(15) << s2.cppmarks << setw(15) << s2.attendence << setw(15) << s2.cgpa << endl;

    fw.close();

    return 0;
}
