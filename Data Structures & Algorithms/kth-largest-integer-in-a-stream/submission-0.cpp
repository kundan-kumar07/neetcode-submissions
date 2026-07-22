class KthLargest {
public:
    priority_queue<int,vector<int>,greater<int>> pq;
    int temp;

    KthLargest(int k, vector<int>& nums) {
        temp=k;
        for(int val:nums){
            pq.push(val);
        }

        
    }
    
    int add(int val) {
        pq.push(val);
        while(pq.size()>temp){
            pq.pop();
        }
        return pq.top();
        
    }
};
