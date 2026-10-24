//program to find the sq root of x
# include<iostream>

using namespace std;

int sr(int target){
    int mid=target/2;
    int ans=-1;
    
    int hi,lo;
    lo=1;
    hi=target;

    while(lo<=hi ){
        int mid=(hi+lo)/2;
        if(mid*mid<=target){
            ans=mid;
            lo=mid+1;
        }
        else{
            hi=mid-1;
        }

    }
    return ans;

}

int main(){
    int target;
    cout<<"enter the target:-",cin>>target,cout<<endl;
    cout<<sr(target);
    return 0;
}