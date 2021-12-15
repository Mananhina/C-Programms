#include <bits/stdc++.h>
using namespace std;

int main(){
  vector<int> peoples(101, 0);
  int n; cin >> n;
  for(int i = 0; i < n; ++i){
    int ind; cin >> ind;
    peoples[ind]++;
  }
  int number = -1;
  int max = peoples[0];
  int max_ind = 0;
  for(int i = 1; i < 101; ++i){
    if(peoples[i] > max){
      max = peoples[i];
      max_ind = i;}
  }
  for(int i = 0; i < 101; ++i){
    if(peoples[i] == max) number++;
  }
  if(number > 0) cout << 0;
  else cout << max_ind;
}
