#include <iostream>
#include <vector>
using namespace std;
using namespace std;
class Solution
{
public:
    int removeElement(vector<int> &nums, int val)
    {    int k=nums.size()-1;
    cout<<"-----"<<nums[k]<<"-------"<<endl;
    
        for(int i=0, j=0;j<=nums.size()-1;j++){
            if(nums[i]==val){
                // cout<<"HELLL";
                // cout<<nums[i];
                if(nums[j]==nums[j+1]){
                    nums[i]=nums[i+1];
                }
               else if(nums[i]!=nums[j+1]){
                    nums[i]=nums[j+1];
                    // nums[i+1]=nums[j+2];
                    // i++;
                    // nums[j+1]=nums[j+2];
                    // int temp=nums[i+1];
                    // nums[i]=temp;
                    // nums[j]=nums[j+1];
                    // i++;
                    
                }
                else{
                
                }
            }
            else{
                i++;
            }
        }
        // int index, k = 0;
        // for (int i = 0; i < nums.size(); i++)
        // {
        //     cout << nums[i] << ", ";
        // }
        // cout << endl;
        // for (int i = 0; i < nums.size(); i++)
        // {

        //     if (nums[i] == val)
        //     {
        //         //  if(nums[index]!=nums[i]){
        //         index = i;
        // nums[index] = nums[i + 1];
        // index++;

        // cout<<"index ["<<index<<"]= "<<nums[index]<<"  i ["<<i<<"]= "<<nums[i]<<endl;
        // if(nums[index]!=nums[i]){
        //     cout<<" HELOO"<<endl;
        //      cout<<"index ["<<index<<"]= "<<nums[index]<<"  i ["<<i<<"]= "<<nums[i]<<endl;
        //   nums[index]=nums[i+1];
        //         index++;
        //         cout<<"nums[index] = "<<nums[index]<<endl;
        //     }
    }
    //  else{
    //             nums[index]=nums[i+1];
    //              cout<<"nums["<<index<<"] = "<<nums[index]<<endl;
    //             //  index++;
    //         }
    // index++;

    // index++;
    // }
    //  else{
    //         index=i+1;
    //         // cout<<"HEEELOOO"<<endl;
    //         // cout<<"nums[indexxxx] = "<<nums[index]<<endl;
    //     }
    //  }

}
;
int main()
{
    Solution s1;
    vector<int> v1{3,2,2,2,3,5};
    int val;
    cout << "Enter the value" << endl;
    cin >> val;
    s1.removeElement(v1, val);
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