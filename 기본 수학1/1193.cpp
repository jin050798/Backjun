#include<iostream>
#include<vector>
#include<string>
using namespace std;

int main(){
    vector<string> number;
    int n;
    cin>>n;
    int size = 0;
    while(1){
        if(n>size*size){
        size++;
        }else{
            break;
        }
    }
    cout<<size;
    for(int i = 0; i<size; i++){
        for(int j = 0; j<size; j++){

        }
    }
}