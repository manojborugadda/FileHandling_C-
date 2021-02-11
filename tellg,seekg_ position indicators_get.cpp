#include<iostream>
#include<bits/stdc++.h>
#include<fstream>
using namespace std;
int main()
{
 fstream file;
 file.open("manoj.txt",ios::in);  // we can use this too ........    file.open(manoj.txt,openmode)
 if(!file.is_open())
{
    cout<<"unable to open the file error is showing -------- :";
}
else
{
    cout<<file.tellg()<<endl;
    string line;
    file.seekg(1);
    getline(file,line);
    cout<<line<<endl;
}
return 0;
}
