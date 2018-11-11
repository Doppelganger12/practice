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
void searchIn(int arr[],int start,int size,int search)
  {
    int mid=(size+start)/2;
    if(arr[mid]==search)
    {
      if(search==arr[start])
          {cout<<start+1;
            return;
          }

    }
    if(start==size)
       return;
    if(arr[start]<arr[mid])
    {
      // if(arr[mid]==search)
      // cout<<mid;
      if(arr[mid]>search)
        {
          searchIn(arr,start,mid,search);
        }
      if(arr[mid]<search)
        {
          searchIn(arr,mid,size,search);
        }
    }
    else{
      searchIn(arr,mid+1,size,search);
      searchIn(arr,start,mid,search);
    }

  }
int main()
{
  int arr[]={3,4,5,1,2};
  int search;
  cin>> search;
  int size=sizeof(arr)/sizeof(int);
  searchIn(arr,0,size/2-1,search);
  searchIn(arr,size/2,size,search);
}
