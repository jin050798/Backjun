#include<iostream>
#include<vector>
#include<algorithm>
#include<string>

using namespace std;

int main(){
    string pre_num;
    cin>>pre_num;
    vector<int> vec_num;

    for(int i = 0; i<pre_num.size(); i++){
        int int_num = (int)pre_num[i]-48;
        vec_num.push_back(int_num);

    }
    sort(vec_num.begin(),vec_num.end(),greater<int>());
    for(int i = 0; i<vec_num.size(); i++){
        cout<<vec_num[i];
    }

}