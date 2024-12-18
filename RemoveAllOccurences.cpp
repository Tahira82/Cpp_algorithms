//
// Created by Tahira on 18.12.24.
//
#include <iostream>
#include <string.h>
using namespace std;

string removeOccurrences(string s, string part) {

    //Time complexity = O(n * m)
    int i = 0;
    int length = part.length();
    while(( i < (s.length() - (length - 1))) &&
            (s.length() > (length - 1))){

        if(s.substr(i, length) == part){
            s.erase(i, length);
            i = 0;
        }
        else
        {
            i++;
        }
            }
    return s;
}

int main() {
  string s="daabcbaabcbc";
  string part="abc";
  cout << removeOccurrences(s, part)<<endl;

  s="axxxxyyyyb";
  part="xy";
  cout << removeOccurrences(s, part)<<endl;

  s = "eemckxmckx";
  part="emckx";
  cout << removeOccurrences(s, part)<<endl;

  return 0;
}