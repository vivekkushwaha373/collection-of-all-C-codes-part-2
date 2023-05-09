// File handling
/*
#include<bits/stdc++.h>
#include<fstream>
using namespace std;
int main()
{
    ofstream s;
    s.open("file.txt", ios:: out);
    s<<"I love you Zoya";
    s.close();
    return 0;
}
*/
#include<bits/stdc++.h>
#include<fstream>
using namespace std;
int main()
{
  char str[40];
  ifstream fin;
//   ofstream fout;
//   fout.open("file.txt",ios::out);
//   fout<<"SPS sareef hai";
//   fout.close();
  fin.open("file.txt",ios::in);
  fin>>str;
  cout<<str;
//   cout<<line;
fin.close();

}