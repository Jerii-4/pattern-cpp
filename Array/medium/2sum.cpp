#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> twoSum(vector<int> &arr, int n,int target)
    {
     unordered_map<int,int> mapp;
      
     for(int i=0;i<n;i++){
        int needed=target- arr[i];
        if(mapp.count(needed)) {
        return {mapp[needed],i};
        }
        mapp[arr[i]]=i;
     }
       
       return{};
    }
};

// Driver code
int main()
{
    vector<int> arr = {-1, 0, 1, 2, -1, -4};
    int n = arr.size();
    int target = 3;
    Solution obj;
    vector<int> res = obj.twoSum(arr, n, target);

    for (auto &num : res){
        cout << num << " ";
        cout << endl;
    }
    return 0;
}
