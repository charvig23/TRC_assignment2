#include <iostream>
using namespace std;
int main(){
    int i,j,row,col,k;
    cout<<"enter no. of rows: ";
    cin>>row;
    for(i=1;i<=(row/2)+1;i++){
        for(j=1;j<=(row/2+2)-i;j++){
            cout<<"* ";
        }
        for(col=1;col<=2*i;col++){
            cout<<"  ";
        }
        for(k=1;k<=(row/2+2)-i;k++){
            cout<<"* ";
        }
        cout<<endl;
    }
    for(i=1;i<=row/2;i++){
        for(j=0;j<=i;j++){
            cout<<"* ";
        }
        for(col=1;col<=(row/2)+4-(2*i);col++){
            cout<<"  ";
        }
        for(k=0;k<=i;k++){
            cout<<"* ";
        }
        cout<<endl;
    }
}
