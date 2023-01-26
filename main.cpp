#include <iostream>
using namespace std;
int binarySearch(int arr[],int n,int key){
  int start=0;
  int end=n-1;
  int mid=start+(end-start)/2;
while(start<=end){
  if(arr[mid]==key){
    return mid;
  }
  if(arr[mid]>key){
   end=mid-1;
  }
  else{
    start=mid+1;
 }
  mid=start+(end-start)/2; 
}
  return -1;
}

int main() {
  int arr[10]={12,13,14,15,18};
  int n=sizeof(arr)/sizeof(arr[0]);
  int ans=binarySearch(arr,n,14);
  cout<<"The element is present in index "<<ans<<endl;
   int ans1=binarySearch(arr,n,18);
  cout<<"The element is present in index "<<ans1<<endl;
   int ans2=binarySearch(arr,n,12);
  cout<<"The element is present in index "<<ans2<<endl;
   int ans3=binarySearch(arr,n,10);
  cout<<"The element is present in index "<<ans3<<endl;
}
