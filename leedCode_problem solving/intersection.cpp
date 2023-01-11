#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
class Solution
{
public:
    vector<int> intersection(vector<int> &nums1, vector<int> &nums2)
    {
    }
};
class Solution
{
public:
    vector<int> intersection(vector<int> &nums1, vector<int> &nums2)
    {
        sort(nums1.begin(), nums1.end());
         sort(nums2.begin(), nums2.end());
        //  for(int i=0;i<nums1.size();)
        int i,j=0;
        while(i<4 && j<5){
cout<<"i= "<<i;
cout<<" j = "<<j<<endl;
i++;
j++;
        }
    
    }
};
int main()
{
    Solution s1;
    vector<int> v1{4, 9, 5};
    vector<int> v2{9, 4, 9, 8, 4};
    // int val;
    cout << "Enter of the Vector after increament larged value by one are:" << endl;
    // cin >> val;
    // sort(v1.begin(), v1.end());
    vector<int> v2 = s1.intersection(v1);
    // cout<<v1[0];
    vector<int>::iterator it = v2.begin();

    // TO display the element of the vector

    while (it != v2.end())
    {
        cout << *it << " ";
        it++;
    }./
    // int k=s1.removeElement(v1,val);
    // cout<<"The value of removed element is:"<<k<<endl;
}
