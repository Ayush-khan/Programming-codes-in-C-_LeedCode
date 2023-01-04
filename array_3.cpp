/*27. Remove Element
Easy
5K
6.7K
Companies
Given an integer array nums and an integer val, remove all occurrences of val in nums in-place. The relative order of the elements may be changed.

Since it is impossible to change the length of the array in some languages, you must instead have the result be placed in the first part of the array nums. More formally, if there are k elements after removing the duplicates, then the first k elements of nums should hold the final result. It does not matter what you leave beyond the first k elements.

Return k after placing the final result in the first k slots of nums.

Do not allocate extra space for another array. You must do this by modifying the input array in-place with O(1) extra memory.*/
#include <iostream>
#include <vector>
#include <iterator>
using namespace std;

class Solution
{
public:
    int removeElement(vector<int> &nums, int val)
    {
        int index, k = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            //  try  
            if(nums[i]==val){
                // cout<<"nums["<<index<<"] = "<<nums[index]<<endl;
              
                if(nums[index]!=nums[i+1]){
                    nums[index]=nums[i+1];
                    index++;
                    cout<<"nums[index] = "<<nums[index]<<endl;
                }
                // else if(nums[i-1]==val){
                //     nums[i-1]=nums[i];
                // }

                else{
                    nums[index]=nums[i+1];
                     cout<<"nums[index] = "<<nums[index]<<endl;
                }
            }

            else{
                index=i+1;
                cout<<"nums[indexxxx] = "<<nums[index]<<endl;
            }


            // if (nums[i] == val)
            // {
            //     index = i;
            //     cout<<"Index= "<<index<<"  i= "<<i<<endl;
            //     // cout<<"HELOPOO";
            //     // i++;
            //     if (nums[index] == nums[i])
            //     {     cout<<"nums[index] = "<<nums[index]<<endl;
            //     cout<<"nums[i]= "<<nums[i]<<endl;
            //         // nums[i - 1] = nums[i];
            //          nums[index] = nums[i];

            //         cout<<"nums[i]= "<<nums[i]<<endl;
            //         if(nums[index]==val){
            //             // cout<<nums[i]<<endl;
            //           index-- ;
            //         }
            //         else
            //     {
            //         nums[index] = nums[i];
            //         index++; 
            //     }

            //         // cout<<endl<<"innnn  "<<i<<endl;
            //     }
                // else
                // {
                //     nums[i - 1] = nums[i];
                //     index++; 
                // }


                // arr[k]=val;

                // if(nums[i]!=nums[i+1]){
                //     nums[i]=nums[i+1];
                // }

                // else if (nums[k]!=nums[i])
                // {
                //     i++;
                // }

                // else{
                //     if(nums[i]==nums[i+1]){
                //     nums[i]=nums[i+1];
             // }


            // }

        } // if(nums[i+1]!=val){
          // nums[i]=nums[i+1];
          // }
          // else{
          //     nums[i]=nums[i+1];
          //     i=0;
          // }
          // cout<<"The value is:"<<val<<endl;

        //   for display the values of an array....
        //   for(int i=0;i<nums.size();i++){
        //     cout<<nums[i]<<"  ";
        //   }
    }
};
int main()
{
    Solution s1;
    vector<int> v1{3, 2, 2, 4, 5, 4, 4, 3, 4, 2, 2, 4, 5, 2, 4, 3};
    int val;
    cout << "Enter the value" << endl;
    cin>>val;
    s1.removeElement(v1, val);
    // int k=s1.removeElement(v1,val);
    // cout<<"The value of removed element is:"<<k<<endl;
}