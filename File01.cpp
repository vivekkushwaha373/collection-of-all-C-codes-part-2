#include<fstream>
#include<iostream>
using namespace std;
int main()
{
    ofstream fout;
    fout.open("vivek.txt",ios::out);
    fout<<"A High School Girl to Remember";
    fout.close();
    ifstream fin;
    fin.open("vivek.txt",ios::in);
    while(!fin.eof())
    {
        cout<<(char)fin.get();
    }
    fin.clear();
    fin.seekg(0,ios::beg);
    cout<<endl;
    while(!fin.eof())
    {
        cout<<(char)fin.get();
    }
    return 0;
}