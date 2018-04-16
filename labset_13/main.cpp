#include<iostream>
#include<iomanip>
#include<cstdlib>
#include<string>
#include<cstring>
#include<cstdlib>
#include<cstdio>
#include<fstream>


using namespace std ;

class Item
{
    public : 
    char name[20] , code[20] ; float prize  ; int  numberofItems; 
    Item(){ prize = numberofItems =0 ; }
    Item(char * , char  * , float , int ) ; 
    void getData()
    {
        cout<<"Enter name , code , prize , no_items : " ; 
        cin>>name >> code >> prize >> numberofItems ; 
    }

    void Display(fstream & file  , int no_objects)
    {
        file.seekg(0 , ios::beg) ; 
        Item tempobj ; 
        for(int i = 0 ; i<no_objects ; i++)
        {
            file.read((char * )&tempobj , sizeof(tempobj)) ; 
            cout<<tempobj.name << " " <<tempobj.code << " " <<tempobj.prize <<endl;;
        }
        file.seekg(0 , ios::beg) ; 
        
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


Item::Item(char * namevar , char * codevar, float pr , int num):prize(pr) , numberofItems(num){
    strcpy(name, namevar)  ; 
    strcpy(code , codevar);
}


int main()
{
    fstream file ; 
    file.open("file" ,ios::trunc |  ios::in | ios::app) ; 
    int no_objects =0  ; 

    int loc ; 
    Item obj ;
    int ch ; 

    while(1)
    {
        cout<<"1.Add object     2.Display    3.Update object : " ; 
        cin>>ch ; 

        switch(ch)
        {
            case 1: 
                obj.getData() ; 
                file.write((char *) &obj , sizeof(obj));
                file.seekp(0 , ios::end) ; 
                no_objects++ ; 
                break ; 

            case 2:
                obj.Display(file , no_objects) ; 
                break ; 

            case 3 :
                ;
                loc = obj.update() ; 
                file.seekp( loc , ios::beg) ; 
                file.write((char *) &obj , sizeof(obj)) ; 
                break ; 

            case 4:
                ;
                file.close() ; 
                exit(8) ; 
        }

        cout<<endl; 
    }
}