//Program to write a sequence
# include<iostream>
using namespace std;

int result(int n,int i){
    if (i<n)
    {
        cout<<i;
        return result(n,i+1);
    }
    
    

}


int main(){
    int n;
    cout<<"Enter the number:-",cin>>n,cout<<endl;
    cout<<result(n,0);
    return 0;
}