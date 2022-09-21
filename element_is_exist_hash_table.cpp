#include<bits/stdc++.h>

using namespace std;

#define MAX 100000

int arr[MAX + 1][2];


void hash_elements(int nums[],int size){
    for(int i = 0; i < size; i ++){
        if(nums[i] >= 0){
            arr[nums[i]][0] = 1;
        }else{
            arr[abs(nums[i])][1] = 1;
        }
    }
    return;
}

bool search_element(int x){
    return x >= 0 ? arr[x][0] == 1 : arr[abs(x)][1] == 1;
}


int main(){
    int nums[5] = {-1, -2, 3, 4, 5};
    hash_elements(nums,5);
    int x;cin>>x;
    string ans = search_element(x) ? "true" : "false";
    cout<<ans;
}
