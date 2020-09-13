class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {
        int pos=0;
        for(int k=0;k<intervals.size();k++)
        {
            if(intervals[k][1]<newInterval[0])
                pos++;
            else
            {
                break;
            }
        }
        
       
        intervals.insert(intervals.begin()+pos,newInterval);
       
        int l=intervals[0][0];
        int r=intervals[0][1];
        vector<vector<int>>ans;
        
        for(int i=1;i<intervals.size();i++)
        {
            // if overlapping
            if(r>=intervals[i][0])
            {
                l=min(l,intervals[i][0]);
                r=max(r,intervals[i][1]);
            }
            else
            {
                ans.push_back({l,r});
                l=intervals[i][0];
                r=intervals[i][1];
            }
        }
        
        
        ans.push_back({l,r});
        
        return ans;
    }
};
