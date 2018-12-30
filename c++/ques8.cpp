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
#define N 4
#define M 6
using namespace std;
int max(int a,int b)
{  if(a>b)
    return a;
  return b;
}
int max(int a ,int b ,int c)
  {
    if(a>b)
      {
        if(a>c)
          return a;
        else
          return c;
      }
    else{
        if(b>c)
          return b;
        else
          return c;
    }
  }
void findmax(int mat1[N][M],int row,int col,int max1[][6],int cur_row,int cur_col)
{  int prevMax;
  if(cur_row<0 || cur_row>=row)
    return;
    if(cur_col<0 || cur_col>=col)
      return;
  if(cur_row == 0)
    {
      prevMax =0;
    }
  else if(cur_col==0)
    {
      prevMax = max(max1[cur_row-1][cur_col],max1[cur_row-1][cur_col+1]);
    }
  else if(cur_row == row-1)
    {
      prevMax = max(max1[cur_row-1][cur_col-1],max1[cur_row-1][cur_col]);
    }
  else
  {
    prevMax = max(max1[cur_row-1][cur_col-1],max1[cur_row-1][cur_col],max1[cur_row-1][cur_col+1]);
  }
  int current_max = prevMax + mat1[cur_row][cur_col];

  max1[cur_row][cur_col] = current_max;
  findmax(mat1,row,col,max1,cur_row+1,cur_col+1);
  findmax(mat1,row,col,max1,cur_row+1,cur_col-1);
  findmax(mat1,row,col,max1,cur_row+1,cur_col);
}
int findmaxMath(int mat1[N][M],int row,int col )
  {
    int temp = -99999;
    int cur_row = 0;
    for(int k = 0;k<col;k++)
    {int max1[N][M];
    for(int i = 0;i<row;i++)
      {
        for(int j=0;j<col;j++)
          max1[i][j]=-99999;
      }
      int cur_col = k;
    int current_sum = -99999;

    findmax(mat1,row,col,max1,cur_row,cur_col);
    for(int j=0;j<col;j++)
    {
       if(temp<max1[row-1][j])
          temp = max1[row-1][j];
    }
    // temp = max(temp,max1[row-1][col-1]);
    // cout<<temp<<"\n";
  }
    cout <<temp;
    // for(int i = 0;i<row;i++)
    //   { cout << "\n";
    //     for(int j=0;j<col;j++)
    //       cout<<max1[i][j]<<" ";
    //   }
    return 0;
  }

int main()
{
  int mat1[N][M] = { { 10, 10, 2, 0, 20, 4 },
                    { 1, 0, 0, 30, 2, 5 },
                    { 0, 10, 4, 0, 2, 0 },
                    { 1, 0, 2, 20, 0, 4 } };
  // int a[3]={1,2,3};
  // test(a,3);
  // for(int i=0;i<3;i++)
  //   cout<<a[i];

  findmaxMath(mat1,N,M);
  return 0;
}
