#include<iostream>
#include<vector>
#include<algorithm>
#include<string>

using namespace std;

int main(){

    int num;
    cin>>num;
    string s;
    //vector<string> vecstr;
    vector<vector<string>> vecstr(num, vector<string>(2, 0));

    for(int i = 0; i<num; i++){
        cin>>s;
        vecstr[i][0] = s;
        int a = vecstr[i][0].length();
        string size = to_string(a);
        vecstr[i][1] = size;
    }
    // vector<string>::iterator iter;

    // iter = vecstr.begin();

    // for(int i = 0; i<num-1; i++){
    //     if(vecstr[i].size()>vecstr[i+1].size()){
    //         string temp = vecstr[i][0];
    //         vecstr[i] = vecstr[i+1];
    //         vecstr[i+1] = temp;
    //     }
    // }
    //sort(vecstr.begin(),vecstr.end());

    for(int i = 0; i<num; i++){
        cout<<vecstr[i][0]<<endl;
    }
}