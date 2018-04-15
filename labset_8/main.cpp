#include<iostream>
#include<iomanip>
#include<fstream>
using namespace std; 


int main(int argc, char * argv[])
{
    string file1 , file2 ; 
    fstream ifile1(argv[1] , ios::in ) , ifile2(argv[2] , ios::in)   , ofile("merge.txt" , ios::out) ; 

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
