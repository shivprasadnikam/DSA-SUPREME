

                                                              // Transpose matrix //

class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& matrix) {
       vector<vector<int>>res;
      for(int i=0;i<matrix[0].size();i++)
      {
       vector<int>ans;
      for(int j=0;j<matrix.size();j++)
      {
          ans.push_back(matrix[j][i]);
      }
     res.push_back(ans);
     }
     return res;
    }
};
