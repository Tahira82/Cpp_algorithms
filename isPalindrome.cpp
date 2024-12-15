//
// Created by Tahira on 15.12.24.
//
#include <iostream>
#include <string>
using namespace std;
//problem: ignore non-alpha-numeric+uppercase to lowercase conversion, s from 1 to 2*10^5
bool isPalindrome(string s) {

        //Time complexity = O(n)
        for(auto &x : s){
            x = (char) tolower(x);
        }

        for (auto it = s.begin(); it != s.end();){

            if (((*it >= '0') && (*it<='9')) ||
                ((*it>='a') && (*it<='z'))){
                ++it;
                }
            else
            {
                it = s.erase(it);
            }
        }

        int start = 0;
        int end = s.length() -1;
        bool isPal = true;

        while(end>start)
        {
            if (s[start] != s[end])
            {
                isPal = false;
                return isPal;
            }
            start++;
            end--;
        }
        return isPal;
}

int main(){
  string s = "A man, a plan, a canal: Panama";
  cout << isPalindrome(s) << endl;
  return 0;
}