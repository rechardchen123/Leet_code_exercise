// Given an unsorted integer array, find the smallest missing postitive integer.

#include<iostream>
#include<vector>

using namespace std;

int firstMissingPositive(vector<int>&nums){
    bool nums1[nums.size()];
    int integer=0;
    int pos;
    for(int i=0; i<nums.size();++i){
        nums1[i] = false;
    }
    for(int i = 0;i<nums.size();++i){
        if(nums[i]>0)
        pos = nums[i];
        nums1[pos-1] = true;
    }
    for(int j = 0; j<nums.size();++j){
        if(nums1[j]==false)
            integer = j+1;
    }
return integer;
}


int main(){
    vector<int> nums ={7,8,9,11,12};
    for(auto i=nums.begin();i!=nums.end();++i)
    cout<<*i<<endl;
    cout<<endl;
    int integer = firstMissingPositive(nums);
    cout<<integer<<endl;
    return 0;
}
