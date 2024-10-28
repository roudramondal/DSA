#include<bits/stdc++.h>
using namespace std;
int main ()
{
  int n;
  cin >> n;
  int digit = n%10;//if i want to  get last two digit then %100 or if i want to get last three digit then %1000;
  cout<<digit <<endl;
  return 0;
}