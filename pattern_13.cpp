#include<iostream>
using namespace std;
int main()
{ 
    int row,col,n;
    cout<<"enter the input : ";
    cin>>n;
    
    for(row=1;row<=n;row=row+1)
    { 
        for(col=1;col<=row-n;col=col+1)
        { 
            cout<<" ";
        }
        for(col=1;col<=row;col=col+1)
        { 
            cout<<row;
        }
        cout<<endl;
    }

}