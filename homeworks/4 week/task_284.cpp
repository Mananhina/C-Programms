#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
  int n; cin >> n;
  vector<int> elements(n);
  for(int i = 0; i < n; ++i) cin >> elements[i];

  int m; cin >> m;
  for(int i = 0; i < m; i++){
    int ik, jk; cin >> ik >> jk;
    for(int ind = 0; ind < n; ++ind){
      if(elements[ind] == ik){
        while(elements[ind] != jk){
          cout << elements[ind] << " ";
          ind++;
        }
        cout << elements[ind] << "\n";
        break;
      }
    }
  }
}