#include <iostream>
using namespace std;
int main(){
    int row,col,i,os,is,n;
    cout<<"enter no. of rows and coloumn: ";
    cin>>row;
    os=row/2;
    n=1;
    is=1;
    for(i=1;i<=row;i++){
        for(int j=1;j<=os;j++){
            cout<<" ";
        }
        for(col=1;col<=is;col++){
            cout<<n;
            if(col<=is/2){
                n++;
            }
            else {
                n--;
            }
        }
        if(i<=row/2){
            os--;
            is=is+2;
            n=i+1;
        }
        else{
            os++;
            is=is-2;
            n=row-i;
        }
        
        
        cout<<endl;
    }
    return 0;
}
