//program to find unique number in vector
# include<iostream>
# include<vector>

using namespace std;

int main(){
    vector<int> V={1,2,3,1,2,3,4,1,2,3,2};

    for(int i=0; i<V.size(); i++){
        int count = 0;

        for(int j=0; j<V.size(); j++){
            if(V[i] == V[j]){
                count++;
            }
        }

        if(count == 1){
            cout << V[i] << endl;
        }
    }

    return 0;
}