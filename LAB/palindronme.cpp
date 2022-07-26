#include<iostream>
using namespace std;
int main()
{
  string str, rev="";
  cout << "Enter The String:";
  cin>>str;

  for(int i=str.length()-1; i>=0;i--)
  {
    rev +=str[i];

  }
  if(rev == str)
    cout <<rev;

  else
    cout << "Not Palindrome"<<endl;
  return 0;

}
