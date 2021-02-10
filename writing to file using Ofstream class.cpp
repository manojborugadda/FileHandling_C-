#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
 ofstream file;
 /////// Here we are leaving BLANK in place of specifying the file opening mode. So C++ opens the file in OUT and TRUNC mode

 file.open("manoj.txt");  // we can use this too ........    file.open(manoj.txt,openmode)
 if(!file.is_open())
{
    cout<<"unable to open the file :";
}
else
{ //////stream insertion operator <<
    file << "learning file handling like beginner:"<<endl;
    file << "soon i will be good at c++ ..........";
file.close();
cout<<" succesfully written to the file and go check it out dude .........";
}
return 0;
}
