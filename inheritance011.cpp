#include<iostream>
using namespace std;
class A
{
    
    public:
    A()
    {
        cout<<"Shubham what is your name"<<endl;
    }
    void public1()
{
    
    cout<<"hello vivek"<<endl;
    
}
    private:
    void private1()
    {cout<<"my name is khan"<<endl;}
    protected:
    void protected1()
    {cout<<"Leke prabho ka naaam"<<endl;}

   
};
class AV2: public A
{

public:
AV2()
{
    cout<<"My name is shubham"<<endl;
}
public2()
{
public1();
protected1();
//private memebers can not be inherited:
}
private:
private2()
{

}
protected:
protected2()
{

}
};
int main()
{
    AV2 s1;
    // s1.protected1();
    return 0;
}