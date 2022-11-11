#include<iostream>
#include<string>
#include<vector>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    int n;
    int m;

    vector<string> set_n;
    vector<string> set_correct;

    cin>>n>>m;
    string sn;
    string mn;

    for(int i = 0; i<n; i++){
        cin>>sn;
        set_n.push_back(sn);
    }
    for(int i = 0; i<m; i++){
        cin>>mn;
        set_correct.push_back(mn);
    }
    int count = 0;
    for(int i = 0; i<n; i++){
        for(int j = 0; j<m; j++){
            if(set_n[i]==set_correct[j]){
                count++;
                continue;
            }
        }
    }
    cout<<count<<endl;
}