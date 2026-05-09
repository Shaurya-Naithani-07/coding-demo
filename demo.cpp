#include<iostream>
#include<vector>
#include <climits>
using namespace std;



int main()
{
    vector<int>nums={1,2,3,4,5,-4,1,-5,9,3 };
    int n =nums.size();
    int maxsum = INT_MIN;
    int curr_sum=0;
    for(int val:nums){
        curr_sum +=val;
        maxsum = max(curr_sum,maxsum);

    }
    cout<<"maximum array sum ="<<maxsum<<endl;
    return maxsum;

}


    


