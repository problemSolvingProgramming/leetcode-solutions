#include<unordered_map>
#include<iostream>
#include<vector>

using namespace std;

/*
std::vector<int> TwoSum(std::vector<int>& nums, int target) {

	std::unordered_map<int, int> result;

	for (int i = 0; i < nums.size(); i++)
	{
		int num = nums[i];
		int complement = target - num;

		auto it = result.find(complement);

		if (it !=result.end())
		{
			return{ it->second ,i };
		}

		result[num] = i;

	}

	return {};
}

*/



vector <int> TwoSum(vector <int> &a , int &target)
{
	int n = a.size();
	for(int i = 0 ; i < n - 1 ; i++)
		for(int j = i + 1 ; j < n ; j++)
		{
			if(a[i] + a[j] == target)
				return {i + 1 , j + 1};
		}
	return {};
}

int main()
{
	vector <int> a = {1 , 4 , 5 , 11 , 12};
	int target = 9;
	for(int &x : TwoSum(a , target))
		cout << x << " ";
	cout << '\n';
}