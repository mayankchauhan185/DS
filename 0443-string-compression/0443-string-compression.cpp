class Solution {
public:
    int compress(vector<char>& chars) {
        int i=0;
        int ansIndex = 0;
        
        while(i<chars.size())
        {
            int j=i+1;
            while(j<chars.size() && chars[i]==chars[j]) 
            {
                j++;
            }
            //control will get out of this when a new charecter is found.
            
            //oldchar store
            chars[ansIndex++] = chars[i];
            
            int count = j-i;
            
            if(count > 1) {
                //converting count into single digit character
                string cnt = to_string(count);
                for(char ch: cnt)
                {
                    chars[ansIndex++] = ch;
                }
            }
            //moving to different character
            i=j;
        }
        return ansIndex;
    }
        
};