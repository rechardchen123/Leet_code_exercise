#include<iostream>
#include<vector>
#include<algorithm>


using namespace std;

int hIndex(vector<int>&citations){
    //sort
    sort(citations.begin(),citations.end());
    int h = 0;
    for(int i= 0; i < citations.size();++i){
        int rest_h = citations.size() - i;
        int current_h = min(citations[i], rest_h);
        if(current_h > h)
         h = current_h;
    }
    return h;
}
