// Given an integer array nums, return true if any value appears at least twice in the array, and return false if every element is distinct.
#include <iostream>
#include <vector>
using namespace std;
class Solution
{
public:
    bool containsDuplicate(vector<int> &nums)
    {
        int i = 0;
        int j = 1;
        while (i < nums.size() && j < nums.size())
        {  
            //   cout<<nums[nums.size()-1]<<" ";
            if(nums[i]==nums[j]){
                j++;
                return true;
            }
            else if(j==nums.size()-1){
                
                i++;
                j=i+1;
            }
            else if(nums[i]!=nums[j]){
                j++;
            }
            if(i==nums.size()-1 && j==nums.size()){
              if(nums[i]==nums[j]){
                cout<<" ****"<<nums[i]<<nums[j];
                return true;
              }
            }
            // else{
            //     return false;
            // }
            
        }
        return false;
        // second approch
            // unordered_set<int> st;
        // for(int i=0 ; i<nums.size() ; i++){
        //     if(st.find(nums[i]) != st.end()){
        //         return true;
        //     }
        //     else{
        //         st.insert(nums[i]);
        //     }
        // }
        // return false;
    }
};

int main()
{
    Solution s1;
    vector<int> v1{2,14,18,22,22};
    vector<int>::iterator it = v1.begin();
    cout << "Elements of the vector are: " << endl;
    while (it != v1.end())
    {
        cout << *it << " ";
        it++;
    }
    int check = s1.containsDuplicate(v1);
    if(check){
        cout<<endl<<"Duplicate is present"<<endl;
    }
    else{
        cout<<endl<<"Duplicate is not present"<<endl;
    }
}