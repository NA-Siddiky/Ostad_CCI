#include <bits/stdc++.h>
#include <iostream>
using namespace std;

bool is_palindrome(const string &str)
{
  int start = 0;
  int end = str.length() - 1;

  while (start < end)
  {
    if (str[start] != str[end])
    {
      return false;
    }
    start++;
    end--;
  }

  return true;
}

int main()
{
  string str;

  getline(cin, str);

  if (is_palindrome(str))
  {
    cout << "YES";
  }
  else
  {
    cout << "NO";
  }
  cout << endl;

  return 0;
}
