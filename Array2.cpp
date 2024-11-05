#include<bits/stdc++.h>
using namespace std;
int main ()
{
  int r, c;
  cin >> r >> c;
  int a[r][c];
  for (int i = 0; i < r;i++)
  {
    for (int j = 0; j < c;j++)
    {
      cin >> a[i][j];
    }
  }
  //print output
  for (int i = 0; i < r;i++)
  {
    for (int j = 0; j < c;j++)
    {
      cout << a[i][j]<<" ";
    }
    cout << endl;
  }
  return 0;
}