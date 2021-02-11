#include<iostream>
#include<bits/stdc++.h>
#include<fstream>
using namespace std;
int main()
{
 fstream file;
 file.open("manoj.txt",ios::in|ios::out|ios::app);  // we can use this too ........    file.open(manoj.txt,openmode)
 if(!file.is_open())
{
    cout<<"unable to open the file error is showing -------- :";
}
else
{
    cout<<"file opened successfully : "<<endl;
    cout<<"writing to the file : ";

    file << "be kind to others bro----"<<endl;
    file.seekg(0); /////we want our new line move to the beginning so we use this seekg(0)
    string line;
    while(file.good()) ////////for reading multiple lines in the file we use this
    {
    getline(file,line);
    cout<<line<<endl;
    }
}
return 0;
}
