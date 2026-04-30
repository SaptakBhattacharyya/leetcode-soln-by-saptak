class Solution {
public:
   int mostWordsFound(vector<string>& sentences) {
        int max_length=0;
        int i=0;
        while(i<sentences.size())
        {
            int count=0;
            for(int j=0;j<sentences[i].size();j++)
            {
                if(sentences[i][j]==' ')
                   count++;
            }
            count+=1; 
            max_length = max(max_length,count);
            i++;
        }
        return max_length;
    }
};