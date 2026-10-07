//Find p^q using recursion
# include<iostream>
using namespace std;


int result(int p , int q){
    if (q==0) return 1;
    if(q==1) return p;
    return p*(result(p,q-1));
    
}



int main(){
    int p,q;
    cout<<"Enter the p:-",cin>>p,cout<<endl;
    cout<<"Enter the q:-",cin>>q,cout<<endl;
    cout<<result(p,q);
    return 0;
}