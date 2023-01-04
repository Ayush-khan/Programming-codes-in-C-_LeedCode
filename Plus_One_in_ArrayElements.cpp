/*You are given a large integer represented as an integer array digits, where each digits[i] is the ith digit of the integer. The digits are ordered from most significant to least significant in left-to-right order. The large integer does not contain any leading 0's.

Increment the large integer by one and return the resulting array of digits.*/
// Problem_No:66
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
class Solution
{
public:
    vector<int> plusOne(vector<int> &digits)
    {
        vector<int>::iterator it = digits.begin();
           int size;
         while (it != digits.end())
        {
        if (it[0] <= it[1])
        {
            size= digits.size()-1;
             
            digits[size]=digits[size]+1;
            // cout<<"_________"<<digits[size]<<endl;
            break;
        }
        else{
            size=digits[0];
            digits[0]=  size+1;
            break;
        }
        // cout<<*it<<endl;
        it++;
        }
        return digits;
    }
};
int main()
{
    Solution s1;
    vector<int> v1{34,8,7,6,5,4,3};
    // int val;
    cout << "Enter of the Vector after increament larged value by one are:" << endl;
    // cin >> val;
    // sort(v1.begin(), v1.end());
    vector <int> v2=s1.plusOne(v1);
    // cout<<v1[0];
    vector<int>::iterator it = v2.begin();

    // TO display the element of the vector

    while (it != v2.end())
    {
        cout << *it << " ";
        it++;
    }
    // int k=s1.removeElement(v1,val);
    // cout<<"The value of removed element is:"<<k<<endl;
}