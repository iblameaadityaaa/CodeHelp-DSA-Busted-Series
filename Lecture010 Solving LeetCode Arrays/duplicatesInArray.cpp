#include<vector>
using namespace std;
/*
so XOR(^) doing XOR to duplicates elements will cancel each other out so there are [1,N-1] elements appear only one but 
one element appear 2 times total of N elements are there in the array so we XOR the array with itself only and the only element appearing two times won't cancel each other back

*/
int findDuplicate(vector<int> &arr) 
{
    int ans = 0;
    
    //XOR ing all array elements
    for(int i = 0; i<arr.size(); i++ ) {
    	ans = ans^arr[i];
    }
	
    //XOR [1, n-1]
    for(int i = 1; i<arr.size();i++ ) {
    	ans = ans^i;
    }
    return ans;
}
