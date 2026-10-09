//program to remove all the occurnence of a from string abnax
# include<iostream>
using namespace std;

string result(string s,int id,int n){
    if(id>=n) return " ";
    char x=s[id];
    if(s[id]=='a'){
        return result(s,id+1,n);
        }
    return x+result(s,id+1,n);
}



int main(){
    string s="abnax";
    cout<<result(s , 0 , 5);
    return 0;
}