// Given an integer array nums sorted in non-decreasing order, remove the duplicates in-place such that each unique element appears only once. The relative order of the elements should be kept the same.

// Since it is impossible to change the length of the array in some languages, you must instead have the result be placed in the first part of the array nums. More formally, if there are k elements after removing the duplicates, then the first k elements of nums should hold the final result. It does not matter what you leave beyond the first k elements.

// Return k after placing the final result in the first k slots of nums.
#include<iostream>
#include<vector>
// #include<algorithm>
#include<iterator>
using namespace std;
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        // vector<int> num1;
        int i,j=0; 
        // vector <int> :: iterator it=num1.begin();
         vector <int> :: iterator it1=nums.begin();
        // creat a new iterator it1 which points to the 1st index element of the vector nums
     auto it=nums.begin()+1;  
    // auto it=next(it1, 0);
     cout<<*it<<endl;
        //  num1.assign(nums.begin(),nums.begin()+1);
         cout<<"HELoo"<<endl;
         int indx=0;
for(;it1!=nums.end();it1++){   
    
            // cout<<*it<<" "<<endl;

            // logic not working
            if(*it1!=*it){
                nums.push_back(*it);
                cout<<"hellooooooo"<<"  ";
                // it+=1; //ye hona chayiye but loop infinite jaa rha hai
                it1++;  //isse bhi nahi ho rha kaam to abhi bhi
                // cout<<indx<<endl;
                
            }

            // cout<<*it1<<" "<<endl;
            // j++;

         
        }

        // while(it1!=nums.end()){
        //     cout<<"V ["<<i<<"] = "<<*it1<<"  ";
        //     i++;
        //     it1++;
        // }
        // num1.assign(nums.begin(), nums.end());
    //    it=std:: unique(num1.begin(),num1.end());
    //    cout<<*it;

    // while loop
        // while(it1!=nums.end()){
        //      if(*it1==*it){
        //         cout<<*it1<<" ";
        //      }
        //     // cout<<*it<<"  ";
        //     it1++;
        // }

        // 
    }
};
int main(){
    vector <int> nums;
    vector <int> :: iterator it=nums.begin();
    nums.push_back(1);
    nums.push_back(2);
    nums.push_back(2);
     nums.push_back(2);
      nums.push_back(3);
        nums.push_back(4);
             nums.push_back(4);
                  nums.push_back(5);
                       nums.push_back(6);
                            nums.push_back(7);
    Solution s1;
    s1.removeDuplicates(nums);
}
