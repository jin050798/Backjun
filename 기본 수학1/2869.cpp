#include<iostream>
#include<cmath>
using namespace std;

int main(){
    int a,b,v;
    cin>>a>>b>>v;

    long result = ceil((v-b)/(a-b));
    cout<<result;
}