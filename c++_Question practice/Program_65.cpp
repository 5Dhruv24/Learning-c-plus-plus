//program to print k multiples of num
# include<iostream>
using namespace std;

void result(int num , int k){
    if (k==0)
    {
        
        return ;
    }
    
    
     result(num,k-1);
    cout<<(num*k)<<" ";
    
}


int main(){
    result(2,5);
    return 0;
}