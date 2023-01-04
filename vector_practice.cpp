/* Question_1: Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.

You may assume that each input would have exactly one solution, and you may not use the same element twice.

You can return the answer in any order.*/

#include <iostream>
#include <vector>
using namespace std;
// class solution
// {
// public:
//     // vector<int> twoSum(vector<int> &nums, int target) {}
//     int twoSum(int arr[], int target){
//         for(int i=0;i<=arr.size();i++){
//         cout<<arr[i];}
//         cout<<endl<<target<<endl;
//     }
// };
int main()
{
    int arr = (1, 3, 5, 2, 5);
    int target, n, Enter_value, value;
    int index = 0;
    cout << "Enter how many values do you want to enter in the vector " << endl;
    cin >> n;
    vector<int> v1;
    for (int i = 0; i < n; i++)
    {
        cout << "Enter the value which you want to enter in the vector" << endl;
        cin >> Enter_value;
        value = Enter_value;
        v1.push_back(value);
    }
    cout << "The size of the vector is :" << v1.size() << endl;
    cout << "The capacity of the vector is :" << v1.capacity() << endl;
    // Creat an iterator vt1
    vector<int>::iterator vt1 = v1.begin();
    while (vt1 != v1.end())
    {
        cout << "Vector[" << index << "] = " << *vt1 << " " << endl;
        index++;
        vt1++;
    }
    // {
    /* code */
    // }

    // for(int j=0;j<v1.size();j++){
    //     cout<<*vt1<<endl;
    // cout<<"Vector V[",j,"] = ",v1[j]," \n ";
    // }
    // solution s1;
    // s1.twoSum( arr, target);
}