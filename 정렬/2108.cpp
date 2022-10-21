#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

int main(){
    int number;
    cin>>number;
    int num;
    vector<int> vec;
    int max_num = 0;
    int minimum_num = 0;
    for(int i=0; i<number; i++){
        cin>>num;
        vec.push_back(num);
        if(num>max_num){
            max_num = num;
        }
        if(num<minimum_num){
            minimum_num = num;
        }
    }
    int sum = 0;
    for(int j= 0; j<vec.size(); j++){
        sum = sum + vec[j];
    }
    int avg = sum/vec.size();
    cout<<avg<<endl;
    sort(vec.begin(),vec.end());
    int midium_num = vec[number/2];
    cout<<midium_num<<endl;
    int count[vec.size()+1] ={0, };
    int many_num = 0;
    int maxx = 0;

    for(int i = 0 ;i<vec.size(); i++){
        count[vec[i]]++;
    }
    for(int i = 0; i<=vec.size(); i++){
        if(maxx < count[i]){
            maxx = count[i];
            many_num = i;
        }
    }
    cout<<many_num<<endl;
    cout<<max_num-minimum_num<<endl;
}