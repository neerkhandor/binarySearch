#include <iostream>
#include<vector>
using namespace std;
class Solution {
    private:
  int firstHalf(vector<int>& nums,int size,int key){
int s=0;int e=size-1;
int mid=s+(e-s)/2;
int ans=-1;
while(s<=e){
    if(nums[mid]==key){
        ans=mid;
        e=mid-1;

    }
    else if(nums[mid]>key){
        e=mid-1;
    }
    else{
        s=mid+1;
    }
    mid=s+(e-s)/2;
}
return ans;
    }

   int lastHalf(vector<int>& nums,int size,int key){
int s=0;
int e=size-1;
int mid=s+(e-s)/2;
int ans=-1;
while(s<=e){
    if(nums[mid]==key){
        ans=mid;
        s=mid+1;

    }
    else if(nums[mid]>key){
        e=mid-1;
    }
    else{
        s=mid+1;
    }
    mid=s+(e-s)/2;
}
return ans;
    }
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int v1=firstHalf(nums,nums.size(),target);
    int v2=lastHalf(nums,nums.size(),target);
         vector<int>v={v1,v2};
        return v;
    }
    
};
int main() {
  std::cout << "Hello World!\n";
}