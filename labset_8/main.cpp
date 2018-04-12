#include<iostream>
#include<iomanip>
#include<fstream>
using namespace std; 


int main(void)
{
    string file1 , file2 ; 
    fstream ifile1("file1" , ios::in ) , ifile2("file2" , ios::in)   , ofile("merge.txt" , ios::out) ; 

    while(ifile1.eof()==false &&  ifile2.eof()==false)
    {
        ifile1 >> file1 ; 
        ifile2 >> file2 ; 
        ofile << file1 <<endl; ; 
        ofile << file2 <<endl; 
    } 

    while(ifile1.eof()==false)
    {
        ifile1 >> file1 ; ofile << file1 <<endl; 
    }

    while(ifile2.eof()==false)
    {
        ifile2 >> file2 ; ofile << file2 <<endl; 
    }
}