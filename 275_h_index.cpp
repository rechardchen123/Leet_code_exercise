#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int hIndex(vector<int>& citations){
    int length = citations.size();
    if(length == 0)
     return 0;
    int min = 0;
    int max = citations.size()-1;
    while(min <=max){
        int mid = (max+min)/2;
        // 如果该点是有效的H指数，则最大H指数一定在右边
        if(citations[mid]< length-mid ){
            min = mid +1;
        }
        else
        max = mid -1;
    }
    return length - min;

}
