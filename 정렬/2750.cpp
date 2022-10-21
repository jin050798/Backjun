#include<iostream>
#include <algorithm>
#include<vector>

using namespace std;

int main(){
    int n;
    int number;
    cin>>n;
    vector<int> vec;
    for(int i=0; i<n; i++){
        cin>>number;
        vec.push_back(number);
    }
    sort(vec.begin(),vec.end());
    for(int i = 0; i<vec.size(); i++){
        cout<<vec[i]<<endl;
    }

}