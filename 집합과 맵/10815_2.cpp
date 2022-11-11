#include<iostream>
#include<vector>
#include<map>

using namespace std;

int main(){
    int n;
    cin>>n;
    map<int,int> cardnum;
    map<int,int> cardcollect;
    //map<int,int> cardyes;
    int card;

    for(int i = 0; i<n; i++){
        cin>>card;
        cardnum.insert({card,i});
    }
    int nn;
    cin>>nn;
    int collect_card;
    for(int i = 0; i<nn; i++){
        cin>>collect_card;
        cardcollect.insert({collect_card,i});
    }
    for(int i = 0; i<nn; i++){
        for(int j = 0; j<n; j++){
            if(cardcollect.find(cardnum[i])!=cardcollect.end()){
                cout<<"find"<<endl;
            }
            else{
                cout<<"no find"<<endl;
            }
        }
    }
            for (auto iter = cardcollect.begin() ; iter !=  cardcollect.end(); iter++)
	{
        for(auto iter = cardnum.begin(); iter != cardnum.end(); iter++){
            cout << iter->first << " " << iter->second << endl;
        }
		cout << iter->first << " " << iter->second << endl;
	}
}