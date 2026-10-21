// #include<iostream>
#include<bits/stdc++.h>
// #include<algorithm>
// #include<vector>
using namespace std;
int main(){
  vector<int> arr;
  arr.push_back(5);
  arr.push_back(6);
  arr.push_back(8);
  arr.push_back(18);
  arr.push_back(16);
  cout<<binary_search(arr.begin(),arr.end() ,5)<<endl; //🥲
}