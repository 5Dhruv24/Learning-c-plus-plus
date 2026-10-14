//program to find the substring fromthe string
# include<iostream>
#include<vector>
using namespace std;

string result(string str,int i,string l,vector<string> & a){
    if(i==str.length()){
        a.push_back(l);
        return " ";
    }
    result(str,i+1,l+str[i],a);
    result(str,i+1,l,a);

}

int main(){
    vector<string> a;
    cout<<result("ABC",0," ",a);
    
    return 0;
}