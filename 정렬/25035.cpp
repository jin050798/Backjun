#include<iostream>
#include <algorithm>
#include<vector>

using namespace std;

int main(){
    int n;
    int number;
    int winner;
    cin>>n>>winner;
    vector<int> vec;
    for(int i=0; i<n; i++){
        cin>>number;
        vec.push_back(number);
    }
    sort(vec.begin(),vec.end());

    cout<<vec[n-winner]<<endl;

}