#include<bits/stdc++.h>
using namespace std;
class student
{
protected:
int student_marks;
public:
// student()
// {
//     cout<<"Constructor of student is called: "<<endl;
// }
// ~student()
// {
//     cout<<"Distructor of student is called: "<<endl;
// }
display()
{
cout<<student_marks<<endl;
}
};

class teacher:protected student
{
protected:
char name[50];
protected:
// teacher()
// {
//     cout<<"Constructor of teacher is called: "<<endl;
// }
// ~teacher()
// {
//     cout<<"Distructor of teacher is called: "<<endl;
// }
display()
{
cout<<name<<endl;
}
};

class student_and_teacher: public teacher
{
public:
Assign(int m, char *n)
{
    student_marks=m;
    strcpy(name,n);
}
display()
{
    cout<<student_marks<<" "<<name<<endl;
}
};
int main()
{
student_and_teacher x;
x.Assign(45,"sweeta");
// x.student::display();
x.student::display();
    return 0;
}