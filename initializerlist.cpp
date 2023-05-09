#include<iostream>
using namespace std;
class student
{
    int x,y;
    public:
    student(int a,int b):x(a),y(x);//x(a),y(b); 
    // x has higher preference than y so x(a),y(x) is valid unlike y(a),x(y)
    {

    }
    void display()
    {
        cout<<"x = "<<x<<endl;
        cout<<"y = "<<y<<endl;
    }

};
int main()
{
    student s1(3,4);
    // s1(3,4);
    s1.display();
    return 0;
}