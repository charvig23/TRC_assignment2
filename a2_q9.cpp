#include <iostream>
using namespace std;
int main(){
    int i,j,n;
    cout<<"enter no. of rows & columns";
    cin>>n;
    for(i=1;i<=n;i++){
        for(j=1;j<=n;j++){
            if(i==j || i+j==6){
                cout<<"* ";
            }
            else
            cout<<"  ";
        }
        cout<<endl;
    }
    return 0;
}
