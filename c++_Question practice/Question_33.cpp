//find difference between elements of odd and even indices

# include<iostream>
# include <vector>
using namespace std;

int main(){
    int odd=0;
    int even=0;
    int ind;
    vector<int> v={1,2,1,2,1,2};
    
    for(int i=0;i<v.size();i++){
        if (i%2==0)
        {
            even+=v[i];
            
        }
        else{
            odd+=v[i];
        }
        
    }
    cout<<"Difference="<<even-odd<<endl;
    return 0;
}