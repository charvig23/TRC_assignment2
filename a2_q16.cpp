#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter no. of rows";
    cin>>n;
    int sp=n+1;
    int num=1;
    for(int i=1;i<=n;i++){
        int k=1;
        for(int j=1;j<=num;j++){
            cout<<k;
            k++;
        }
        k=1;
        for(int col=1;col<=sp;col++){
            cout<<" ";
        }
        for(int j=n;j>=1;j--){
             if(j==n){
                continue;
            }
            else if(j<=num){
                cout<<j;
            }
        }
        cout<<endl;
        k=1;
        num++;
        sp=sp-2;
    }
    return 0;
}
