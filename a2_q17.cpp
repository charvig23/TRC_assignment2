#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter height of arrow: ";
    cin>>n;
    for(int i=1;i<=n/2+1;i++){
        for(int j=1;j<=n/2;j++){
            if(i==n/2+1)
            cout<<"* ";
            else
            cout<<"  ";
        }
        for(int col=1;col<=i;col++){
            cout<<"* ";
        }
        cout<<endl;
    }
    for(int i=n/2;i>=1;i--){
        for(int j=1;j<=n/2;j++){
            cout<<"  ";
        }
        for(int col=i;col>=1;col--){
            cout<<"* ";
        }
        cout<<endl;
    }
    return 0;
}
