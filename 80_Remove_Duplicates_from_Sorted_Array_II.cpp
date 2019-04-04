#include<iostream>
#include<vector>

using namespace std;

int removeDuplicates(vector<int>& nums){
    if(nums.size()<=0)
        return 0;
    int begin_num = 0;
    for(int i = 2; i<nums.size();++i){

        if(nums[i]==nums[i-2-begin_num])
            begin_num++;
        else
            nums[i-begin_num] = nums[i];
    }
    return nums.size() - begin_num;
}

int main(){
    vector<int> nums = {1,1,1,2,2,3};
    for(auto i =nums.begin(); i != nums.end();++i)
     cout<< " "<<*i;
    cout<<endl;
    int length = removeDuplicates(nums);
    cout<<"The length of the new vector is: "<<length<<endl;
    return 0;
}
