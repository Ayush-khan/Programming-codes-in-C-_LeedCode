#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
class Solution
{
public:
    int searchInsert(vector<int> &nums, int target)
    {
        int index, k = 0;
        for (index = 0; index < nums.size(); index++)
        {
            if(nums[index]<=target){
            if (nums[index] == target)
            {
                cout << "Target is found:" << endl;
                cout << "Target[" << index << "]= " << nums[index] << endl;
                break;
            }
            // else
            // {
            //     index += 1;
            //     cout << "Target[" << index << "]= " << nums[index] << endl;
            //     break;
            // }
            k++;
            }
        }
        cout << "K=" << k << endl;
      
    }
};
int main()
{
    Solution s1;
    vector<int> v1{1, 3, 5, 7, 9, 11};
    int val;
    cout << "Enter the value" << endl;
    cin >> val;
    sort(v1.begin(), v1.end());
    s1.searchInsert(v1, val);
    vector<int>::iterator it = v1.begin();

    // TO display the element of the vector

    while (it != v1.end())
    {
        cout << *it << " ";
        it++;
    }
    // int k=s1.removeElement(v1,val);
    // cout<<"The value of removed element is:"<<k<<endl;
}