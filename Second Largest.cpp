#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    // Function returns the second
    // largest elements
    int getSecondLargest(vector<int> &arr) {
        int largest = -1;
        int secLargest = -1;
        for(int i=0;i<arr.size();i++){
            if(arr[i]>largest){
                secLargest = largest;
                largest = arr[i];
            }
            else if(arr[i]<largest && arr[i]> secLargest){
                secLargest = arr[i];
            }
        }
        return secLargest;
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
       int ans = ob.getSecondLargest(arr);
       cout << ans << endl;
       cout << "~" << endl;
  }
  return 0;
}
