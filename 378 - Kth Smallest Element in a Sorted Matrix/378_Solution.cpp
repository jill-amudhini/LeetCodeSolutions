class Solution {
public:
    int kthSmallest(vector<vector<int>>& matrix, int k) {
        priority_queue<int> kq;
        
        for(int i=0;i<matrix.size();i++)
        {
            for(int j=0;j<matrix[i].size();j++)
            {
                kq.push(matrix[i][j]);
                if(kq.size()>k)
                {
                    kq.pop();
                }
            }
        }
        return kq.top();
    }
};