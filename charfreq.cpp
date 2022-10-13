class Solution {
public:
  string frequencySort(string s) {
    map<char, int> mp;
    for (auto it : s) mp[it]++;
    vector<pair<int, char>> v;
    for (auto it : mp)
      v.push_back({ it.second,it.first });
    sort(v.begin(), v.end(), greater<>());
    string ans = "";
    for (auto it : v) {
      int count = it.first;
      while (count--)
        ans += it.second;
    }
    return ans;
  }
};