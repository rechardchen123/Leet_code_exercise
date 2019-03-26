#include<iostream>
#include<vector>

using namespace std;

int removeDuplicates(vector<int>&nums){
    if(nums.size()<=0)
    return 0;
    int begin_num = 0;
    for(int i =1;i<nums.size();++i) //这个地方的i<=nums.size()在leetcode提示堆栈溢出，要注意
    {
        if(nums[begin_num]!=nums[i]){
            begin_num++;
            nums[begin_num] = nums[i];
        }
    }
    return begin_num +1; //最后返回的结果要记得加1 因为没算最开始的元素，i从1开始计算的。
}

int main()
{
    vector<int> nums = {0,0,1,1,1,2,2,3,3,4};
    for(auto i =nums.begin(); i != nums.end();++i)
        cout << " "<< *i;
    cout<<endl;
    int length = removeDuplicates(nums);
    cout<<"The length of the new array: "<<length<<endl;
    return 0;
}
