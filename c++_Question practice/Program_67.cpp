//program t find the hcf of two integer
# include<iostream>
using namespace std;

int result(int a,int b){
    if(b>a) return result(b,a);
    if (b==0)
    {
        return a;
    }
    result(b,a%b);
}


int main(){
    cout<<result(3,7); 
    
    return 0; 
}