//Program to find whether the given number is amstrong or not
# include<iostream>
#include<cmath>
using namespace std;

int result(int n,int l){

    if (n >= 0 && n <= 9) return (int)round(pow(n, l));
    return result(n % 10, l) + result(n / 10, l);
}

int main(){
    int n;
    cout<<"enter the number:",cin>>n,cout<<endl;

    if (n==result(n,3))
    {
       cout << "Y"<<endl;
    }
    else{
        cout<<'N'<<endl;
    }
    
 
    return 0;
}