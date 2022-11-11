#include<iostream>
#include<vector>

using namespace std;

int main(){
    int n;
    scanf("%d",&n);
    int cardnum;
    vector<int> vcardnum;
    for(int i = 0; i<n; i++){
        scanf("%d",&cardnum);
        vcardnum.push_back(cardnum);
    }
    int m;
    scanf("%d",&m);
    int mm;
    vector<int> vm;
    for(int i = 0; i<m; i++){
        scanf("%d",&mm);
        vm.push_back(mm);
    }
    vector<int> vv(m);
    for(int i = 0; i<m; i++){
        for(int j = 0; j<n; j++){
            if(vm[i]==vcardnum[j]){
                vv[i] = 1;
                break;
            }
        }
    }
    for(int i = 0; i<m; i++){
        printf("%d ",vv[i]);
    }
}