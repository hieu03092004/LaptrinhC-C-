#include<bits/stdc++.h>
using namespace std;
int main()
{
 long long n,a,b;
 cin>>n>>a>>b;
 if (n % __gcd(a,b)!=0) 
 {
  cout<<-1;exit(0);
 }
 else{
  for (int i=n/b;i>=0;i--)
  if ((n-i*b)%a==0) 
  {
  cout<<i+(n-i*b)/a;
  exit(0);
  } 
  cout<<-1;
 }
}
