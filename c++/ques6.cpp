#include <iostream>
#include<iostream>
#include<iomanip>
#include<vector>
#include<stack>
#include<queue>
#include<deque>
#include<map>
#include<set>
#include<string>
#include<algorithm>
#include<math.h>
#include<limits.h>
#include<string>
#define NINF INT_MIN
using namespace std;
int main(){
  int arr[]={10, 1, 2, 3, 4, 5, 6, 7, 8, 9};
  int sum=0;
  int current_sum=0;
  int size=sizeof(arr)/sizeof(int);
  for(int i=0;i<size;i++)
  {
      sum=sum+arr[i];
      current_sum=current_sum+arr[i]*i;
  }
  // int current_sum=sum;
  int max_sum=current_sum;
  for(int i=1;i<size;i++)
  {
    current_sum=current_sum+sum-size*arr[size-i];
    if(current_sum>max_sum)
    max_sum=current_sum;
  }
  cout<<max_sum;
  return 0;
}
