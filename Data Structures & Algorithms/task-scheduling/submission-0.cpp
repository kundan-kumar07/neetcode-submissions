class Solution {
public:
    int leastInterval(vector<char>& tasks, int n) {
        vector<int> arr(26,0);
        for(char c:tasks){
            arr[c-'A']++;
        }
        sort(arr.begin(),arr.end());

        int maxFreq=arr[25];

        int idleSlots=(maxFreq-1)*n;

        for(int i=24;i>=0;i--){
            idleSlots-=min(arr[i],maxFreq-1);
        }
        if(idleSlots>0){
            return tasks.size()+idleSlots;
        }
        return tasks.size();
    }
};