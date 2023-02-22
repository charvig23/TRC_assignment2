#include <iostream>
using namespace std;
int main(){
    int row,i,j,n;
    cout<<"enter no. of rows: ";
    cin>>row;
    int c=1;
    for(i=0;i<=row-1;i++){
        for(j=0;j<=i;j++){
            if(i==0 || j==0){
                c=1;
            }
            else{
                c=(c*(i-j+1))/j;
            }
            cout<<c;
        }
        cout<<endl;
    }
    return 0;
}
