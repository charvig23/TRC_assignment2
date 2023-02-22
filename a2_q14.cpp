#include <iostream>
using namespace std;
int main(){
    int x;
    cout<<"enter a no.: ";
    cin>>x;
    for(int i=1;i<=10;i++){
        int a=i*x;
        cout<<x<<"*"<<i<<"="<<a<<endl;;
    }
    return 0;
}
