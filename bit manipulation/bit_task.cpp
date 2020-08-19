#include<iostream>
using namespace std;
bool isOdd(int n){
    return(n&1);
}

int getBit(int n, int i){
    int mask =(1<<i);
    int bit=(n&mask)>0? 1: 0;
    return bit;
}
int setBit(int n,int i){
    int mask = (1<< i);
    int ans =n|mask;
    return ans;
}
void clearBit(int &n,int i){
    int mask = ~(1<<i);
    n= n&mask;

}
void updateBit(int &n,int i, int v){
    int mask =~(1<<i);
    int cleared_n =n&mask;
    n=cleared_n|(v<<i);

}
int clearLastIBits(int n,int i){
    int mask =(-1<<i);
    return n& mask;
}
int clearRangeItoj(int n,int i,int j){
    int ones =(~0);
    int a = ones<<(j+1);
    int b =(1<<i)-1;
    int mask =a|b;
    int ans =n&mask;

    
    return ans;
}
int main(){
    int n= 15;
    int i = 2;//no of bits to clear
    //cin>>i;
    //clearBit(n,i);
    cout<<clearLastIBits(n,i)<<endl;
    /*updateBit(n,2,0);
    updateBit(n,4,1);
    cout<<n<<endl;
    /*cout<<getBit(n,i)<<endl;
    n = setBit(n,i);
    cout<<"Ans: "<<n<<endl;
    cout<<isOdd(5)<<endl;
    */

    return 0;

}