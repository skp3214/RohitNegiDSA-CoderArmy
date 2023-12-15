#include<iostream>
#include<vector>
using namespace std;

void merge(int arr[],int start,int mid,int end){
    vector<int>temp(end-start+1);
    int left=start,right=mid+1,index=0;
    while(left<=mid && right <=end) {
        if(arr[left] >=arr[right]){
            temp[index++]=arr[left++];
        }
        else{
            temp[index++]=arr[right++];
        }
    }
    // copy the remaining elements of left side
    while(left<=mid){
        temp[index++]=arr[left++];
    }
    // copy the remaining elements of right side
    while(right<=end){
        temp[index++]=arr[right++];
    }
    index=0;
    while(start<=end){
        arr[start++]=temp[index++];
    }

}


void MergeSort(int arr[],int start,int end){
    if (start >= end) return ;
    int mid = (start + end)/2;
    MergeSort(arr,start,mid);
    MergeSort(arr,mid+1,end);
    merge(arr,start,mid,end);
}
int main(int argc, char const *argv[])
{
    int arr[]={4,3,6,1,8,2,9,5,7};
    MergeSort(arr,0,8);
    for(auto i:arr){
        cout<<i<<" ";
    }
    return 0;
}
