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
int count=0;
void findrot(int num[],int start,int end){
  // cout<<"count"<<*count;
  // cout<<"&cout"<<&count;
  int mid=(start+end)/2;
  if(start==end)
    return;
  if(num[start]<=num[end])
    return;
  else if(num[start]>num[end])
    { count=count+1;
      findrot(num,start,mid);
      findrot(num,mid+1,end);
    }
}
int main(){
  int num[] = {15, 18, 2, 3, 6, 12};
  int size = sizeof(num)/sizeof(int);


  // cout<<"&count"<<&count<<"*count"<<*count<<" ";
  // findrot(num,0,size-1,&count);
  cout<<"rotation count is:"<<count;
  return 0;
}
