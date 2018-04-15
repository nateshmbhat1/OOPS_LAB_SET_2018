#include<iostream>
#include<iomanip>
#include<cstdlib>
#include<fstream>


using namespace std ; 

class Item
{
    public : 
    string name , code ; float prize  ; int  numberofItems; 
    Item(){name = code = "" ; prize = numberofItems =0 ; }
    Item(string , string , float , int ) ; 
    void getData()
    {
        cout<<"Enter name , code , prize , no_items : " ; 
        cin>>name >> code >> prize >> numberofItems ; 
    }

    void Display(fstream & file )
    {
        file.seekg(0 , ios::beg) ; 
        Item tempobj ; 
        while(file.eof()==false)
        {
            file.read((char * )&tempobj , sizeof(tempobj)) ;
            cout<<tempobj.name << " " <<tempobj.code << " " <<tempobj.prize <<endl;;
        }
    }

    int update() 
    {
        int index  , loc ; 
        cout<<"Enter the index of object to update ! " ; 
        cin>>index ; 

        loc = index * sizeof(*this) ; 
        getData() ; 
        return loc ; 
    }
};

Item::Item(string namevar , string codevar, float pr , int num):name(namevar) , code(codevar) , prize(pr) , numberofItems(num){}


int main()
{
    fstream file ; 
    file.open("file" , ios::app | ios::binary) ;
    if(!file){
        cout<<"Error in opening file !" ; exit(2) ; 
    }

    Item obj ;
    int ch ; 

    while(1)
    {
        cout<<"1.Add object     2.Display    3.Update object  : " ; 
        cin>>ch ; 
        switch(ch)
        {
            case 1: 
                obj.getData() ; 
                file.seekg(0 , ios::end) ; 
                file.write((char *) &obj , sizeof(obj)) ;
                file.close() ; 
                break ; 

            case 2:
                file.open("file" , ios::in | ios::binary) ; 
                obj.Display(file) ; 
                file.close() ; 
                break ; 

            case 3 :
                file.open("file" , ios::app | ios::binary) ; 
                int loc = obj.update() ; 
                file.seekp( loc , ios::beg) ; 
                file.write((char *) &obj , sizeof(obj)) ; 
                
                break ; 
        }

        cout<<endl; 
        system("clear") ;  
    }
}