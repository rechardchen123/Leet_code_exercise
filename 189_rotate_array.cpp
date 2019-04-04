#include<iostream>
#include<vector>

using namespace std;

//第一种方法采用双重循环，但是时间复杂度是O(n*k)
void rotate(vector<int>&nums, int k){
    int temp;
    int previous;
    for(int i = 0; i< k;++i){
        previous = nums[nums.size()-1];
        for(int j = 0; j<nums.size();++j){
            temp = nums[j];
            nums[j] = previous;
            previous = temp;
        }
    }
}

//新申请一个数组，长度与原来的数组一样长，然后将原数组的元素按照（i+k）% nums.size()
//长度后，将i位置的放在新数组的位置上。
//最后遍历一遍后复制回来。时间复杂度 O(n)。
void rotate1(vector<int>&nums, int k){
    vector<int> nums1;
    nums1.reserve(nums.size());
    for (int i = 0; i< nums.size();++i)
        nums1[(i+k)%nums.size()] = nums[i];
    for(int j = 0; j<nums.size();++j)
        nums[j] = nums1[j];
}

int main(){
    vector<int> nums = {1,2,3,4,5,6,7};
    int k;
    cout<<"please enter the input k value: "<<endl;
    cin>>k;
    rotate(nums,k);//此处传递的是引用，因此返回的是修改后的vector
    for(auto i = nums.begin();i!=nums.end();++i)
     cout<< *i <<endl;
    rotate1(nums,k);
    for(auto j =nums.begin();j!=nums.end();++j)
    cout<< *j <<endl;
    return 0;
}
