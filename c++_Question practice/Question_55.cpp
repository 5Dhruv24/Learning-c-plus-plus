//Program to print the sum of the number between x and y where x<=10^3 and x<y<10^8
# include<iostream>
using namespace std;

int main(){
    int x,y;
    cout<<"Enter value of x:-",cin>>x,cout<<endl;
    cout<<"Enter value of y:-",cin>>y,cout<<endl;
    int n=y-x+1;
    int sum=(((2*x)+n-1)*n)/2;
    cout<<sum;
    
    return 0;
}