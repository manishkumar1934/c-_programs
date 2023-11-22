#include<iostream>
using namespace std;
int main ()
{ 
    int row,col,n;
    cout<<"enter the input:";
    cin>>n;
    for(row=1;row<=n;row=row+1)
    { 
        // print space
        for(col=1;col<=n-row;col=col+1)
        { 
            cout<<"  ";
        }
        //print number in assending order
        for(col=1;col<=row;col=col+1)
        cout<<col<<" ";
        // print number in desending order
        for(col=row-1;col>=1;col=col-1)
        cout<<col<<" ";
        cout<<endl;
    }
}