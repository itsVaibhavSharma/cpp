#include <iostream>
#include <iomanip>
using namespace std;
//setw(width)
int main()
{
    struct student {
        string name;
        int roll;
        int cppmarks;
        float attendence;
        float cgpa;
    }s1, s2, s3, s4, s5;

    s1.name = "Vaibhav Sharma";
    s1.roll = 69;
    s1.cppmarks = 100;
    s1.attendence = 100;
    s1.cgpa = 10;

    s2.name = "Srijan Kathel";
    s2.roll = 63;
    s2.cppmarks = 75;
    s2.attendence = 80;
    s2.cgpa = 10;

    s3.name = "Parth Singh";
    s3.roll = 46;
    s3.cppmarks = 90;
    s3.attendence = 99;
    s3.cgpa = 9.5;

    s4.name = "Aman Bhardwaj";
    s4.roll = 12;
    s4.cppmarks = 100;
    s4.attendence = 96;
    s4.cgpa = 9.8;

    s5.name = "Jeet Bhardwaj";
    s5.roll = 32;
    s5.cppmarks = 100;
    s5.attendence = 90;
    s5.cgpa = 9.8;

   cout.setf(ios::left) ;
   cout << "    "<< setw(20) << "Name" << setw(15) << "Roll" << setw(15) << "CppMarks" << setw(15) << "Attendence" << setw(15) << "CGPA" << endl;
   cout <<setw(25) << s1.name  << setw(15) << s1.roll << setw(15) << s1.cppmarks << setw(15) << s1.attendence  << setw(15) << s1.cgpa << endl;
   cout <<setw(25) << s2.name  << setw(15) << s2.roll << setw(15) << s2.cppmarks << setw(15) << s2.attendence  << setw(15) << s2.cgpa << endl;
   cout <<setw(25) << s3.name  << setw(15) << s3.roll << setw(15) << s3.cppmarks << setw(15) << s3.attendence  << setw(15) << s3.cgpa << endl;
   cout <<setw(25) << s4.name  << setw(15) << s4.roll << setw(15) << s4.cppmarks << setw(15) << s4.attendence  << setw(15) << s4.cgpa << endl;
   cout <<setw(25) << s5.name  << setw(15) << s5.roll << setw(15) << s5.cppmarks << setw(15) << s5.attendence  << setw(15) << s5.cgpa << endl;



    return 0;
}