#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter no. of rows";
    cin>>n;
    int f=1,s=1,nxt=0;
    for(int i=0;i<=n-1;i++){
        for(int j=0;j<=i;j++){
            if(i<=1)
            nxt=i;
            else{
                nxt=f+s;
                f=s;
                s=nxt;
            }
            cout<<nxt<<" ";
       }
       cout<<endl;
    }
}

