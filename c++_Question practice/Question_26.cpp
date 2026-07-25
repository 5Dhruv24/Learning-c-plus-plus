//Program to find sum of each element in array
# include<iostream>
using namespace std;


int main(){
    int num[10]={1,2,3,4,5,6,7,8,9,10};
    int sum=0;
    for (int i:num)
    {
        sum+=i;
    }
    cout<<"The sum of all numbers of array:-"<<sum<<endl;
    
    return 0;
}