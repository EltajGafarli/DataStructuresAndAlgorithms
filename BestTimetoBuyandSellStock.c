#include<stdio.h>

int maxProfit(int* prices, int pricesSize){
  int left = 0,right = 1;
  int max = 0;
  while(right<pricesSize){
    if(prices[left] <= prices[right]){
      int diff = prices[right] - prices[left];
      if(max < diff) max = diff;
      right ++;
    }else{
      left ++;
    }
  }
  return max;
}

int main(){
    //an example
    int pricesSize = 6;
    int arr[] = {7,1,5,3,6,4};
    int *ptr = arr;
    printf("%d",maxProfit(ptr,pricesSize));
}
