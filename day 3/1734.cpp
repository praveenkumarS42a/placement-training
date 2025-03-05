class Solution {
 public:
  vector<int> decode(vector<int>& encoded) {
    const int n = encoded.size() + 1;
    int nXors = 0;
    for (int i = 1; i <= n; i++)
      nXors ^= i;
    int rXors = 0;
    int xors = 0;  
    for (const int encode : encoded) {
      rXors ^= encode;
      xors ^= rXors;
    }
    vector<int> ans{xors ^ nXors};

    for (const int encode : encoded)
      ans.push_back(ans.back() ^ encode);

    return ans;
  }
};
