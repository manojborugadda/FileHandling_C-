#include<iostream>
#include<bits/stdc++.h>
#include<fstream>
using namespace std;
int main()
{
 ofstream file;
 file.open("manoj.txt",ios::out);  // we can use this too ........    file.open(manoj.txt,openmode)
 if(!file.is_open())
{
    cout<<"unable to open the file error is showing -------- :";
}
else
{
   cout<<file.tellp()<<endl;
   file << "i am borugadda manoj";
   cout<<file.tellp()<<endl;
   file.seekp(5);//// file.seekp(5,ios::beg) or file.seekp(5,ios::cur) OR file.seekp(5,ios::end) ------- these are the three directions use for OFFSET values
   file << "and borugadda is my surname";
   cout<<file.tellp()<<endl;
}
return 0;
}
