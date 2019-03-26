#include<iostream>
#include<stack>
#include<vector>

using namespace std;

//双指针法
int removeElement(vector<int> & nums, int val){
    if (nums.size()<=0)
        return 0;
    int begin = 0;
    for(int i=0; i <nums.size(); ++i)
    {
        if(nums[i]==val)
            begin++;
        else
            nums[i-begin] = nums[i];
    }
    return nums.size()-begin;
}

int main()
{
    cout<<"Please enter the value that you want to remove: ";
    int value;
    cin >> value;
    vector<int> nums = {0,1,2,2,3,0,4,2};
    for (auto i=nums.begin(); i != nums.end(); ++i)
        cout<<' '<< *i;
    int length = removeElement(nums, value);
    cout<<endl;
    cout<<"The length of new vector is: "<<length<<endl;
    return 0;
}
