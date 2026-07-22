class Solution {
public:
    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
        vector<vector<int>> adj(numCourses);
        vector<int> indegree(numCourses,0);
        for(vector<int> vec:prerequisites){
            int a=vec[0];
            int b=vec[1];
            indegree[b]++;
            adj[a].push_back(b);


        }
        queue<int> q;
        for(int i=0;i<numCourses;i++){
            if(indegree[i]==0){
                q.push(i);
            }
        }
        vector<int> ans;


        while(!q.empty()){
            int top=q.front();
            q.pop();
            ans.push_back(top);
            for(int val:adj[top]){
                indegree[val]--;
                if(indegree[val]==0){
                    q.push(val);
                }
            }


        }
        if(ans.size()==numCourses){
            return true;
        }
        return false;
        
        
    }
};
