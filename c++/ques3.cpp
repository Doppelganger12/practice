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
void rotated(int arr[],int start,int size)
{
 for (int i=start;i<size/2;i++)
  {
    int temp=arr[i];
    arr[i]=arr[size-i-1];
    arr[size-i-1]=temp;
  }


}
int main()
{
  int rot;
  cin>>rot;
  int arr[]={1, 2, 3, 4, 5, 6, 7};
  int size=sizeof(arr)/4;
  rotated(arr,0,rot);
  rotated(arr,rot,size);
  rotated(arr,0,size);
  for(int i=0;i<size;i++)
  cout<<arr[i];
  return 0;
}
