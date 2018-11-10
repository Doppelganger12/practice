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
int main()
{
  int arr[]={20,30,10,50,40};
  int size=sizeof(arr)/4;
  map <int,int> countOfInt;
  // countOfInt[1]=22;
  // countOfInt[1]=countOfInt[1]+1;
  for(int i=0;i<sizeof(arr)/4;i++)
    {
      countOfInt[arr[i]]+=1;
    }
    int max=0;
  map<int,int>:: iterator itr;

  for(itr=countOfInt.begin();itr!=countOfInt.end();itr++)
  {
    if(max<itr->second)
      max=itr->second;
  }
    cout<<size-max;
  return 0;

}
