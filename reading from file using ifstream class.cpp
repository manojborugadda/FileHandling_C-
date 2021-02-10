#include<iostream>
#include<bits/stdc++.h>
#include<fstream>
using namespace std;
int main()
{
 ifstream file;
 /////// Here we are leaving BLANK in place of specifying the file opening mode. So C++ opens the file in IN mode

 file.open("manoj.txt");  // we can use this too ........    file.open(manoj.txt,openmode)
 if(!file.is_open())
{
    cout<<"unable to open the file error is showing -------- :";
}
else
{
    cout<<"reading the content from file : "<<endl;
    string line;
    while(file.good()) ////////for reading multiple lines in the file we use this
    {
    getline(file,line);
    cout<<line<<endl;
    }
}
return 0;
}
