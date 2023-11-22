#include<iostream>
using namespace std;
int main()
{ 
    int row , col, n;
    cout<<"input the number : " ;
    cin>>n;
    for(row=1;row<=n;row=row+1)
    { 
        // print space
        for(col=1;col<=n-row;col=col+1)
        cout<<"  ";
        // print star
        for(col=1;col<=row;col=col+1)
        { 
            cout<<"* ";
        }
        cout<<endl;
    }
}