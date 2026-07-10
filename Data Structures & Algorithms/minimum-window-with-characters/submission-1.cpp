class Solution {
public:
    string minWindow(string s, string t) {
        if(t.size()>s.size()){
            return "";
        }
        int i=0;
        int j=0;
        int n=s.size();
        int starti=0;
        int minSize=INT_MAX;
        unordered_map<char,int> m;
        for(char c:t){
            m[c]++;
        }
        int count=m.size();
        while(j<n){
            if(m.find(s[j])!=m.end()){
                m[s[j]]--;
                if(m[s[j]]==0){
                    count--;
                }
            }
            while(count==0){
                if(j - i + 1 < minSize){
                    minSize = j - i + 1;
                    starti = i;
                }

                if(m.find(s[i])!=m.end()){
                    m[s[i]]++;
                    if(m[s[i]]>0){

                        count++;

                    }
                    
                }
                i++;
            }
            j++;
        }
        return minSize==INT_MAX?"":s.substr(starti,minSize);


        
    }
};
