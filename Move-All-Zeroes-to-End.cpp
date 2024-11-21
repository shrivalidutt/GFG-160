#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    void pushZerosToEnd(vector<int>& arr) {
        // code here
        int n = arr.size();
        int count = 0;
        for(int i=0; i<n;i++){
            if(arr[i] != 0){
                if(i != count){
                     int temp = arr[i];
                     arr[i] = arr[count];
                     arr[count] = temp;
                }
                count++;
            }
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
        while (ss >> number){
              arr.push_back(number);
        }
        Solution ob;
        int n= arr.size();
        ob.pushZerosToEnd(arr);
        for(int i=0; i<n; i++){
              cout << arr[i} << " ";
        }
        cout << "\n";
    }
    return 0;
}
