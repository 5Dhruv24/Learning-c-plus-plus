//program to find the sq root of x
# include<iostream>

using namespace std;

int sr(int target){
    int mid=target/2;
    int ans;
    
    int hi,lo;
    lo=0;
    hi=target;

    while(lo<=hi ){
        mid=hi/2;
        if(mid*mid==target){
            return mid;

        }
        else if(mid*mid>target){
            hi=mid-1;
        }
        else if(mid*mid<target and (mid+1)*(mid+1)>target){
            return mid;
        }
    }

}

int main(){
    int target;
    cout<<"enter the target:-",cin>>target,cout<<endl;
    cout<<sr(target);
    return 0;
}