#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
using namespace std;

int findMin(vector<int> &nums){
    int low = 0;
    int high = nums.size()-1;

    int Min = min(nums[low], nums[high]);
    if(nums.size() < 3)
        return Min;
    while(low < high){
        int mid = (low+high)/2;
        if(nums[mid] > Min){
            low = mid+1;
        }else{
            Min = min(Min, nums[mid]);
            high = mid - 1;
        }
        if(nums[low] > nums[high]){
            Min = min(Min, nums[high]);
        }else{
            Min = min(Min, nums[low]);
        }
    }
    return Min;
}

int main(int argc, const char *argv[])
{
    vector<int> nums;
    //nums.push_back(4);
    //nums.push_back(5);
    //nums.push_back(6);
    //nums.push_back(7);
    //nums.push_back(0);
    nums.push_back(1);
    nums.push_back(2);
    cout << findMin(nums) << endl;
    return 0;
}
