//program to chec whether the given number is palindrom or not using recursion
# include<iostream>
using namespace std;

bool result(int n, int * temp){
    if(n>=0 and n<=9){
        int ls=*temp%10;
        *temp /=10;
        return (n==ls);
    }
    bool res=(result(n/10 ,  temp) and n%10 == *temp%10);
    *temp /=10;
    return res;
}




int main(){
    int n;
    cout<<"Enter the number:-",cin>>n,cout<<endl;
    int te=n;
    int *temp=&te;
    cout<<result(n,temp);
    
    return 0;
}