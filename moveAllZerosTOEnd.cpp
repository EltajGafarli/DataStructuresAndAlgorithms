#include<bits/stdc++.h>
using namespace std;


void moveAllZerosTOEnd(vector<int>&nums){
    int j = 0;
    int size = nums.size();
    for(int i = 0;i<size;i++){
        if(nums[i] != 0){
            nums[j ++] = nums[i];
        }
    }
    for(;j<size;j++){
        nums[j] = 0;
    }
    return;
}

void print(vector<int>nums){
    int i = 0;
    while(i++ < nums.size()){
        cout<<nums[i]<< ' ';
    }
    return ;
}

int main(){
    vector<int>nums{1,2,0,3,0,0,5};
    moveAllZerosTOEnd(nums);
    print(nums);
}
