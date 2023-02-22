#include<iostream>
using namespace std;
int main()
{
    int i,j,row,col;
    cout<<"enter no. of rows";
    cin>>row;
    for(i=1;i<=(row/2)+1;i++)
    {
        for(j=1;j<=((row/2)+1)-i;j++){
            cout<<" ";
        }
        for(col=1;col<=i*2-1;col++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    for(i=1;i<=row/2;i++){
        for(j=1;j<=i;j++){
            cout<<" ";
        }
        for(col=row;col>=i*2+1;col--){
            cout<<"*";
        }
        cout<<endl;
    }
}
