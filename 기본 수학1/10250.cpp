#include<iostream>
#include<string>
#include<cmath>
using namespace std;

int main(){
    int Test_num;
    cin>>Test_num;
    int height,width;
    int client_num;
    string room_num;
    int client_height=0;
    int client_width=0;
    for(int i = 0; i<Test_num; i++){
        cin>>height>>width>>client_num;
        client_width = ceil(client_num/height)+1;
        client_height = client_num%height;
        if(client_width<10){
            room_num = to_string(client_height)+"0"+to_string(client_width);
        }else{
            room_num = to_string(client_height)+to_string(client_width);
        }
        cout<<room_num<<endl;
    }
    
}