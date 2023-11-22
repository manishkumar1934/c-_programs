#include<iostream>
using namespace std;
int main()
{ 
    int row,col;
    for(row=1;row<=10;row=row+1)
    { 
        for(col=1;col<=10;col=col+1)
        { 
            cout<<row*col<<" ";
        }
        cout<<endl;
    }
}