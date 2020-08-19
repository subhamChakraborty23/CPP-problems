#include<iostream>
using namespace std;
//replace pi with 3.14
//input: xsnnsnajnpijnjsnpiooo
//output:xsnnsnajn3.14jnjsn3.14ooo
void replacePi(char a[],int i){
    if(a[i]=='\0' || a[i+1]=='\0'){
        return;
    }
    if(a[i]=='p' && a[i+1]=='i'){
        //shifting
        int j= i+2;
        while(a[j]!='\0'){
            j++;
        }
        while(j>=i+2){
            a[j+2]=a[j];
            j--;
        }
        a[i]='3';
        a[i+1]='.';
        a[i+2]='1';
        a[i+3]='4';
        replacePi(a,i+4);

    }
    else{
        replacePi(a,i+1);
    }
    return;
}
int main(){
    char a[1000];
    cin>>a;
    replacePi(a,0);
    cout<<a<<endl;

    return 0;
}