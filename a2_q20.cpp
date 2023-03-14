#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter n: ";
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(j==1 || j==n)
            cout<<"* ";
            else if(i==n-1 && j==n/2)
            cout<<"* ";
            else if (i==n/2+1 && j==i)
            cout<<"* ";
            else if(i==n-1 && j==n-1)
            cout<<"* ";
            else
            cout<<"  ";
        }
        cout<<endl;
    }
    return 0;
}
