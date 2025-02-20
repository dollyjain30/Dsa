#include <iostream>
using namespace std;
class Student
{
public:
    string name;
    int rno;
    float marks;

    Student(string n, int r, float m) // paramatrised constructors
    {
        name = n;
        rno = r;
        marks = m;
    }
};
// void change(Student &x)
// {
//     x.name = "Guddan";
// }
// changing name using pointer
void change(Student *s)
{
    (*s).name = "guddan";
}
int main()
{
    Student s("Dolly Jain", 81, 100);
    cout << s.name << endl;
    // cout << s.rno << endl;
    // cout << s.marks << endl;
    Student *ptr = &s;
    // (*ptr).name = "guddan";
    // ptr->name = "guddan jain";
    change(&s); // pass by reference
    cout << s.name;
    return 0;
}