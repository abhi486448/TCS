#include<iostream>
#include<vector>
using namespace std;

// Broot force
bool UniqueOccu(vector<int>vac){
    vector<pair<int,int>> count;

    for(int i=0; i<vac.size(); i++){
        bool found = false;
        for(auto& p : count){
            if(p.first == vac[i]){
                p.second++;
                found = true;
                break;
            }
        }
        if(!found) count.push_back({vac[i], 1});
    }

    for(int i=0; i<count.size(); i++){
        for(int j=i+1; j<count.size(); j++){
            if(count[i].second == count[j].second){
                return false;
            }
        }
    }
    return true;
}

int main(){

    vector<int> vac = {1,2,2,1,3};

    bool Unique;
    Unique = UniqueOccu(vac);

    if(Unique){
        cout<<"Yes, Unique Number Occurence";
    } else {
        cout<<"No, Not Unique Number Occurence";
    }


    return 0;
}
