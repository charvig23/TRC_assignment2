#include <iostream>
using namespace std;
int main(){
    int n,l;
    cout<<"enter no. of rows: ";
    cin>>n;
    int sp=n/2;
    int st=n/2;
    for(int i=1;i<=n/2+1;i++){
        if(i==1){
            for(int j=1;j<=n;j++){
                cout<<"*";
            }
        }
        else if(i!=1){
            for(int k=1;k<=i-1;k++){
                cout<<" ";
            }
            for(int k=1;k<=1;k++){
                cout<<"*";
            }
            for(l=1;l<=sp;l++){
                cout<<" ";
            }   
            sp=sp-2;
            for(int k=1;k<=1;k++){
                if(i==n/2+1)
                break;
                else
                cout<<"*";
            }
            
        }
        cout<<endl;
    }
    for(int m=n/2;m>=1;m--){
        for(int j=1;j<m;j++){
            cout<<" ";
        }
        for(int k=st;k>=1;k--){
            cout<<"*";
        }
        st=st+2;
        cout<<endl;
    }         
    
    
    
}
