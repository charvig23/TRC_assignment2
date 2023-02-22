#include <iostream>
using namespace std;
int main(){
    int row,col,i,os,is;
    cout<<"enter no. of rows and coloumn: ";
    cin>>row;
    os=row/2;
    is=-1;
    for(i=1;i<=row;i++){
        for(int j=1;j<=os;j++){
            cout<<" ";
        }
        for(col=1;col<=1;col++){
            cout<<"*";
        }            
        for(int l=1;l<=is;l++){
            cout<<" ";
        }
        for(col=1;col<=1;col++){
            if(i!=1 && i!=row)
            cout<<"*";
        }
        if(i<=row/2){
            os--;
            is=is+2;
        }
        else{
            os++;
            is=is-2;
        }
        
        cout<<endl;
        
    }
}
