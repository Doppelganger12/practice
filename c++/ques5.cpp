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
bool checkn(int arr[],int n,int size)
{
  int pivot=0;
  int max=size-1;
  for(int i=0;i<size;i++)
    {
      if(arr[i]>arr[i+1])
        {pivot=i+1;
         max=i;
          break;
        }
      }
        int left=pivot;
        int right=max;
      while(left!=right)
      {
        if(arr[left]+arr[right]==n)
          return true;
        if(arr[left]+arr[right]>n)
          right=(size+right-1)%size;
        else
          left=(left+1)%size;
      }
      return false;

    


}
int main(){
  int n;
  cin>>n;
  int arr[]={11, 15, 6, 8, 9, 10};
  int size=sizeof(arr)/sizeof(int);
  cout<<checkn(arr,n,size);
  return 0;
}
