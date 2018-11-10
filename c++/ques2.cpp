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
void rotated(int arr[],int rot,int size)
{
  rot=rot%size;
  int i;
  for(i=rot;i<size;i++)
  {cout<<arr[i]<<" ";}
  for(i=0;i<rot;i++)
  {cout<<arr[i]<<" ";}

}
int main()
{
  int rot;
  cin>>rot;
  int arr[]={1, 2, 3, 4, 5, 6, 7};
  int size=sizeof(arr)/4;
  rotated(arr,rot,size);
  return 0;
}
