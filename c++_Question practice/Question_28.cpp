//Program to perform linear search
# include<iostream>
using namespace std;

int linearsearch(int num[]){
    
}
int main(){
    int num[10]={1,2,3,4,5,6,7,8,9,10};
    int n;
    int ind=0;
    cout<<"Enter the number:-",cin>>n,cout<<endl;
    for(int i:num){
        if (n==i )
        {
            cout<<"The index:-"<<ind<<endl;
            break;
        }
        ind++;
        
    }

    return 0;
}