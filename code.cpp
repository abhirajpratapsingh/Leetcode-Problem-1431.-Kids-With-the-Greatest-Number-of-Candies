class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) 
    {
        vector<bool>v;
        int max=candies[0];
        for(int i=1;i<candies.size();i++)
        {
            if(max<candies[i])
                max=candies[i];
        }
        for(int j=0;j<candies.size();j++)
        {
            if(max<=candies[j]+extraCandies)
                v.push_back(true);
            else
                v.push_back(false);
        }
        return v;   
    }
};
