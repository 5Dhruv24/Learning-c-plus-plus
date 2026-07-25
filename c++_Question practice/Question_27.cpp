//Program to find maximum value from the array
# include<iostream>
using namespace std;

int main(){
    int num[5]={23,3664,15,86,2};
    int max=0;
    for (int i:num)
    {
        if (max<i)
        {
            max=i;
        }
        
    }
    cout<<"The max value from array:-"<<max<<endl;
    return 0;
}