class Solution {
public:
    vector<int> findOrder(int numCourses, vector<vector<int>>& prerequisites) {
        vector<vector<int>> adj(numCourses);
        vector<int> indegree(numCourses,0);
        for(vector<int> vec:prerequisites){
            adj[vec[1]].push_back(vec[0]);
            indegree[vec[0]]++;
        }
        queue<int> q;
        for(int i=0;i<numCourses;i++){
            if(indegree[i]==0){
                q.push(i);
            }
        }
        vector<int> ans;
        while(!q.empty()){
            int temp=q.front();
            q.pop();
            ans.push_back(temp);
            for(int val:adj[temp]){
                indegree[val]--;
                if(indegree[val]==0){
                    q.push(val);
                }
            }

            
        }
        if(ans.size()==numCourses){
            return ans;
        }
        return {};

        
    }
};
