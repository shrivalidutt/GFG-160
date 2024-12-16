#include <bits/stdc++.h>
using namespace std;

class Solution{
  public:
    void reverseArray(vector<int> &arr){
      int n = arr.size();
      for(int i=0; i<n/2; i++){
        int temp =arr[i];
        arr[i] = arr[n-1-i];
        arr[n-1-i] = temp;
      }
    }
};

int main(){
  int t;
  cin >> t;
  cin.ignore();
  while(t--){
       vector<int> arr;
       string input;
       getline(cin,input);
       stringstream ss(input);
       int number;
       while(ss>>number){
            arr.push_back(number);
       }
       Solution ob;
       ob.reverseArray(arr);
       for(int i = 0; i<arr.size(); i++){
          cout<< arr[i]<< " ";
       }
       cout << endl;
       cout << "~" << endl;
  }
  return 0;
}

