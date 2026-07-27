//Program to find the number of triplets that sum is equal to given number
# include<iostream>
# include<vector>
using namespace std;

int main(){
    vector<int> v={1,2,3,4,5,6};
    int n=0;
    int num,sum;
    cout<<"Enter number:-",cin>>num,cout<<endl;
    for (int i = 0; i < v.size(); i++)
    {

        for (int j = i+1; j < v.size(); j++)
        {
            for (int k = j+1; k<v.size(); k++)
            {
                if (v[i]+v[j]+v[k]==num)
                {
                    n+=1;
                }
                
            }
            
        }
        
    }
    cout<<"Numbers of triplets:-"<<n<<endl;
    return 0;
}