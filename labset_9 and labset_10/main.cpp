#include<bits/stdc++.h>
using namespace std ; 

class Matrix
{
    int ** matrix , row , col ; 

    public : 
    Matrix(){
        row = col = 0 ; 
    }
    Matrix(int r  ,int c) ; 
    Matrix(const Matrix&) ; 
    bool operator==(const Matrix & M)
    {return row==M.row && col==M.col ; }

    Matrix operator+(const Matrix& M)
    {
        if(M.row!=row || M.col !=col) cout<<"Not addable"  ; return M ; 
        Matrix obj = Matrix(row , col) ; 
       for(int i =0 ; i<row ; i++)
        for(int j =0 ; j<col ;j++)
            obj.matrix[i][j] = matrix[i][j] +M.matrix[i][j] ; 

        return obj ;
    }

    Matrix operator*(const Matrix& M)
    {
        Matrix sum(row , M.col) ;
        for(int i =0 ; i<row ; i++)
        {
            for(int j =0 ; j<M.col ; j++)
            {
                sum.matrix[i][j] = 0; 
                for(int k =0 ; k<col ; k++)
                    sum.matrix[i][j]+=matrix[i][k] * M.matrix[k][j] ; 

            }
        }

        return sum ; 
    }

    friend ostream& operator<<(ostream& out , const Matrix & M) ;
    friend istream& operator>>(istream& out , const Matrix & M) ;
    
};

istream& operator>>(istream& out , const Matrix & M)
{

    cout<<endl; 
        for(int i =0 ; i<M.row ;cout<<endl ,  i++)
        for(int j =0 ; j<M.col ;j++)
            cin>>M.matrix[i][j] ; 
    
    cout<<endl; 
    return out ; 
}

ostream& operator<<(ostream& out , const Matrix & M)
{

    cout<<endl;; 
        for(int i =0 ; i<M.row ;cout<<endl ,  i++)
        for(int j =0 ; j<M.col ;j++)
            cout<< M.matrix[i][j] <<' ' ; 
    
    cout<<endl ; 
    return out ; 
}


Matrix::Matrix(int r , int c)
{
    row = r , col = c ; 
    matrix = new int *[row] ; 
    for(int i =0 ; i<row ; i++)
        matrix[i] = new int[col] ; 
}

Matrix::Matrix(const Matrix& M)
{
    row = M.row , col = M.col ; 
    matrix = new int *[row] ; 
    for(int i =0 ; i<row ; i++)
        matrix[i] = new int[col] ; 
    for(int i =0 ; i<row ; i++)
        for(int j =0 ; j<col ;j++)
            matrix[i][j] = M.matrix[i][j] ; 
}


int main()
{
    Matrix A(2, 3) , B(3, 1) ; 
    cin>>A >>B ; 
    cout<<A ; 
    cout<<B ; 
    cout<< A+B ; 
    cout<<A*B ; 
}


