#include<iostream>
#include<list>
using namespace std;
//Doubly linked list:push_back,push_front,pop_back,pop_front,insert,erase,
int main(){
    list<int> l;
    list<int> l1{1,2,3,4,5};
    list<string> l2{"apple","guava","mango"};
    l2.push_back("pineapple");
    l2.sort();
    l2.reverse();
    cout<<l2.front()<<endl;
    l2.pop_front();
    //add to front the list

    l2.push_front("kiwi");
    cout<<l2.back()<<endl;
    l2.pop_back();
    for(auto it=l2.begin();it!=l2.end();it++){
        cout<<(*it)<<" ->";
    }
    cout<<endl;
    
    l2.push_back("orange");
    l2.push_back("lemon");
    for(string s:l2){
        cout<<s<<"-->";
    }
    string f;
    cin>>f;
    l2.remove(f);

    auto it =l2.begin();
    it++;
    it++;
    l2.insert("fruitjuice");
    l2.erase(it);

    return 0;

}