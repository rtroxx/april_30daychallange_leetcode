class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string> > my_map;
	vector<vector<string> > final_set;

	for (int i = 0; i < strs.size(); i++)
	{
		string key = strs[i];

		sort(key.begin(), key.end());

		my_map[key].push_back(strs[i]);

	}

	for (auto n : my_map)
    {
		final_set.push_back(n.second);
	}

	return final_set;
    }
};
