#include<iostream>
#include<stack>
#include<cstdlib>


using namespace std ; 

class Expression
{
    string infix , postfix ; 

    public : 
    Expression():infix(""), postfix(""){}
    void readInfix() ; 
    void toPostfix() ; 
    void display() ; 
};

int preced(char c)
{
    switch(c)
    {
        case '#' : 
        case '(' : return 0 ; 
        case '+' : 
        case '-' : return 1; 
        case '*' :
        case '/' : return 2; 
        case '^' : return 3 ; 
    }
}

void Expression::toPostfix()
{
    stack<char> mystack ; 
    mystack.push('#') ; 

    if(infix.empty())
        cout<<"Empty infix ! " <<endl ;
    
    for(int i =0 , len = infix.length()  ; i< len  ; i++)
    {

        char symb = infix[i]  , temp ;

        if(isalpha(symb))
        {
            postfix+=symb ; 
        }

        else{

            switch(symb)
            {
                case '(' : mystack.push('(') ; 
                            break ; 

                case ')' : 
                        temp  = mystack.top() ; 
                        mystack.pop() ; 
                        while(temp!='(')
                        {
                            postfix+=temp ; 
                            temp = mystack.top() ; mystack.pop() ; 
                        }

                default:
                    while(preced(symb)<=preced(mystack.top()))
                    {
                        postfix+=mystack.top() ; mystack.pop() ; 
                    }

                    mystack.push(symb) ; 
            }

        }
    }

    while(mystack.top()!='#')
        postfix+=mystack.top() , mystack.pop() ; 
}

void Expression::readInfix()
{
    cout<<"Enter a valid infix expression : " ; 
    cin>>infix ; 
    this->toPostfix() ;
}


void Expression::display()
{
    cout<<"Infix : " <<infix ; 
    cout<<"\nPostfix : " <<postfix ; 
}

int main()
{
    Expression E ; 
    E.readInfix() ;
    E.display() ; 
}