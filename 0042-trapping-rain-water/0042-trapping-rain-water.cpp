class Solution {
public:
    int trap(vector<int>& height) {
    int n = height.size();
        if(n<=2)
            return 0;
        
        int maxleft=height[0];
        int maxright=height[n-1];
        int trappedwater=0;
        int left=1;
        int right=n-2;
        
        while(left<=right)
        {
            if(maxleft<maxright)
            {
                if(height[left]>=maxleft)
                    maxleft = height[left];
                else
                    trappedwater += maxleft-height[left];
                left+=1;
            }
            else {
                if(height[right]>=maxright)
                    maxright=height[right];
                else
                    trappedwater += maxright-height[right];
                right-=1;
                    
            }
        }
        return trappedwater;
        
    }
};