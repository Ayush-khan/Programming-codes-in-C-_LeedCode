#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
class Solution
{
public:
    void merge(vector<int> &nums1, int m, vector<int> &nums2, int n)
    {
        int i = 0;
        int j=1;
        vector<int> num;

        while (i <= nums1.size() && j <= nums2.size())
        {
            cout << "HEEEEE" << endl;
            if (nums1[i] > nums2[j-1])
            {
                num.push_back(nums2[j-1]);
                j++;
                cout << "i=" << i << "j= " << j << endl;
            }
             else if(i==m){
                num.push_back(nums2[j-1]);
                j++;
            }
            else if(j==n){
                num.push_back(nums1[i]);
                i++;
            }
            else if (nums1[i] < nums2[j-1])
            {
                num.push_back(nums1[i]);
                i++;
            }
            else if (nums1[i] == nums2[j-1])
            {
                num.push_back(nums1[i]);
                num.push_back(nums1[j]);
                i++;
                j++;
            }
         
            // cout<<"i="<<i<<"j= "<<j<<endl;
        }
        if(m==0){
            num=nums2;
        }
        else if(n==0){
            num=nums1;
        }
        vector<int>::iterator it = num.begin();
        while (it != num.end())
        {
            cout << *it << " ";
            it++;
        }
    }
};
// main function
int main()
{
    Solution s1;
    vector<int> v1{0};
    vector<int> v2{1};
    // v1.Sort(v1.begin(),v1.end());
    // int val;
    cout << "Enter of the Vector after increament larged value by one are:" << endl;
    
    s1.merge(v1, 0, v2, 1);
}
