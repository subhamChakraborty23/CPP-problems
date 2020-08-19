#include<iostream>
#include<limits>
#include<math.h>
using namespace std;
void max_PowerGirls(int a[],int b[],int n){
    int smallest =INT_MAX;
    int ratio[1000000]={0};
    for(int i= 0;i<n;i++){
        ratio[i]=abs(a[i]/b[i]);
    }
    for(int i= 0;i<n;i++){
        smallest=min(smallest,ratio[i]);
    }
    cout<<smallest<<endl;

}
int main()
{
    //Write code here
    int n;
    int b[10000000];
    int a[10000000];
    for(int i= 0;i<n;i++){
        cin>>b[i];
    }
    for(int i= 0;i<n;i++){
        cin>>a[i];
    }
    max_PowerGirls(a,b,n);
    return 0;
}