//sum of digit

# include<iostream>
using namespace std;

int main(){
     int r;
     int d=0;
    cout<<"Enter number:-",cin>>r,cout<<endl;
    for (int i = 0; i<10; i++)
    {
        d=d+r%10;
        r/=10;

        }
    
    cout<<"The sum of digits:-"<<d<<endl;
    
    return 0;
}