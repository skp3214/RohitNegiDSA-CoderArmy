#include<iostream>
#include<vector>
using namespace std;

class SegmentTree{
    vector<int>tree;
    vector<int>arr;
    int n;
    public:
    SegmentTree(vector<int>input){
        arr=input;
        n=input.size();
        tree.resize(4*n);
        buildMax(0,0,n-1);
    }
    void buildMax(int node,int start,int end){
        if(start==end){
            tree[node]=arr[start];
            return;
        }
        int mid=start+(end-start)/2;
        build(2*node+1,start,mid);
        build(2*node+2,mid+1,end);
        tree[node]=max(tree[2*node+1],tree[2*node+2]);
    }

    int maxInRange(int l,int r){
        return findMax(0,0,n-1,l,r);
    }
    int findMax(int node,int start,int end,int l,int r){
        // fully out of range
        if(start>r || end<l){
            return INT_MIN;
        }
        // fully in the range
        if(start>=l && end<=r){
            return tree[node];
        }
        // overlapping or partially in the range
        int mid=start+(end-start)/2;
        return max(findMax(2*node+1,start,mid,l,r),findMax(2*node+2,mid+1,end,l,r));
    }

    void update(int node, int start, int end, int idx, int val) {
        if (start == end) {
            arr[start] = val;
            tree[node] = val;
            return;
        }
        int mid = start + (end - start) / 2;
        if (idx <= mid) {
            update(2 * node + 1, start, mid, idx, val);
        } else {
            update(2 * node + 2, mid + 1, end, idx, val);
        }
        tree[node] = max(tree[2 * node + 1], tree[2 * node + 2]);
    }
};

int main(){

    vector<int>arr;

    arr.push_back(3);
    arr.push_back(6);
    arr.push_back(4);
    arr.push_back(25);
    arr.push_back(5);
    arr.push_back(13);
    arr.push_back(18);

    SegmentTree *Tree=new SegmentTree(arr);
    cout<<Tree->maxInRange(0,2)<<endl;
    Tree->update(0,0,6,1,10);
    cout<<Tree->maxInRange(0,2)<<endl;
    return 0;
}