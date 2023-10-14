class Solution {
public:
	int subarraySum(vector<int>& nums, int k) {
		// Your code goes here
		unordered_map<int,int> count;
		count[0] = 1;
		int prefix = 0, answer=0;
		for(int i=0;i<nums.size();i++)
		{
			prefix += nums[i];
			if(count.count(prefix-k))
			{
				answer += count[prefix-k];
			}
			count[prefix]++;
		}
		return answer;
	}
};
