//program to count number of 1 in highest
# include<iostream>
# include<vector>
using namespace std;

int main(){
   vector<vector<int>> v(3,vector<int>(4));
   for (int i = 0; i < 3; i++)
   {
    v[i].resize(4);
     for (int j = 0; j < 4; j++)
     {
        int n;
        cin>>n;
        v[i][j]=n;
     }
     
   }
   int maxCount = -1;
   int index = -1;
   
   for (int i = 0; i < 3; i++)
   {
    int m = 0;
    for (int j = 0; j < 4; j++)
    {
        if (v[i][j] == 1)
        {
            m += 1;
        }
    }
    
    if (m > maxCount)
    {
        maxCount = m;
        index = i;
    }
   }
   cout << "Index is: " << index << endl;
   
    
    return 0;
}