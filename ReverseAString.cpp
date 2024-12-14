//
// Created by Tahira on 13.12.24.
//

#include <iostream>
#include <string>
using namespace std;

char * reverseString(char * arr, int size){

  char * temp = new char[size];
  temp[size] = '\0';
  int k = 0;
  for(int i= size - 1; i >= 0; i--){
    temp[k] = arr[i];
    k ++;
    }
    return temp;
}

char * reverseString(char arr[]) {
  int size = strlen(arr);
  char * temp = new char[size];
  temp[size] = '\0';
  int k = 0;
  for(int i= size - 1; i >= 0; i--){
    temp[k] = arr[i];
    k ++;
  }
  return temp;
}

string ReverseSTLString(string s) {
  reverse(s.begin(), s.end());
  return s;
}

int main(){

  int size;
  cout<<"Enter the size of string: "<<endl;
  cin>>size;
  cin.ignore(numeric_limits<streamsize>::max(), '\n');

  char * arr = new char[size+1];
  cout<<"Enter a string to reverse: "<<endl;
  cin.getline(arr, size+1);

  arr = reverseString(arr, size);
  cout<<"Reversed string is: "<<arr<<endl;

  delete [] arr;
  arr = nullptr;

  char arr1[6];
  cout<<"Enter a string to reverse: "<<endl;
  cin.getline(arr1, 6+1);

  char * arr2 = reverseString(arr1);
  cout<<"Reversed string is: "<<arr2<<endl;

  delete [] arr2;
  arr2 = nullptr;

  string str;
  cout<<"Enter a string to reverse: "<<endl;
  getline(cin, str);
  string str1 = ReverseSTLString(str);
  cout<<"Reversed string is: "<<str1<<endl;
  return 0;
}
