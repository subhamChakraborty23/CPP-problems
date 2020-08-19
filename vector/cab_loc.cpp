#include<iostream>
#include<vector>
#include<algorithm>
#include<cstring>
using namespace std;


class Car{
    public:
    string name;
    int x,y;
    Car(){

    }
    Car(string n,int x,int y){
        name =n;
        this->x =x;
        this->y=y;
    }
    void dist(){
        return x*x+y*y;
    }

}



bool compare(pair<int,int>p1, pair<int,int>p2)
{
    int d1= p1.first*p1.first +p1.second*p1.second;
    int d2=p2.first*p2.first + p2.second*p2.second;
     //if two cars have the same distance then sort according to x coordinate
     if(d1==d2){
         return p1.first<p2.first;
     }
     return d1<d2;

}

int main(){
    int n;
    cin>>n;
    vector<pair<int,int>> v;
    for(int i=0;i<n;i++){
        int x,y;
        cin>>x>>y;
        v.push_back(make_pair(x,y));

    }
    sort(v.begin(),v.end(),compare);
    for(auto p:v){
        cout<<"CAR ("<<p.first<<","<<p.second<<")"<<endl;
    }
    return 0;
}