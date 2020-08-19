#include<iostream>
using namespace std;
int main(){
    int n;
    int tn[100] = {0};
    cin>>n;
    int sum=0;
    
    for(int i=0;i<=n+1;i++){
    
        tn[i]=i*(n-i);
    }
    for(int i=0;i<=n+1;i++){
        cout<<tn[i];
        sum += tn[i];
    }cout<<endl;
    cout<<sum<<endl;

    
    return 0;
}
