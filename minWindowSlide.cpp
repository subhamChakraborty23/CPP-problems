#include<iostream>
#include<climits>
#include<string>
using namespace std;

string find_window(string s,string pat){
    int SL =s.length();
    int PL =pat.length();

    if(PL>SL){
        return "NONE";
    }
    int FS[256]={0};
    int FP[256]={0};
    for(int i=0;i<PL;i++){
        char ch = pat[i];
        FP[ch]++;
    }
    //3 .sliding window(Expansion + contraction + update the min length window)
    int cnt=0;
    int start=0;//left pointer for shrinking the window
    int min_len=INT_MAX;
    int start_idx=-1;
    for(int i=0;i<SL;i++){
        char ch =s[i];
        FS[ch]++;
        //Maintain the cnt of characters
        if(FP[ch]!=0 && FS[ch]<=FP[ch]){
            cnt++;
        }
        //i all the chars match
        if(cnt==PL){
            //start shrinking the window
            char temp =s[start];
            while(FP[temp]==0 || FS[temp]>FP[temp]){
                FS[temp]--;
                start ++;
                temp =s[start];
            }
            //window size
            int window_len=i-start+1;
            if(window_len<min_len){
                min_len=window_len;
                start_idx=start;
            }


        }


    }
    if(start_idx==-1){
        return "none";
    }
    string ans =s.substr(start_idx,min_len);
    return ans;
}

int main(){
    string s="hllloeaeo world";
    string p ="eelo";
    cout<<find_window(s,p)<<endl;
    
    return 0;

}