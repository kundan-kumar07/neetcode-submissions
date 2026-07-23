class MedianFinder {
public:
    MedianFinder() {
        
    }
    vector<int> arr;
    
    void addNum(int num) {
        arr.push_back(num);
        
    }

    
    double findMedian() {
        sort(arr.begin(),arr.end());
        int n=arr.size();
        if(n%2!=0){
            return arr[n/2]/1.0;
        }
        double median=(arr[n/2]+arr[n/2-1])/2.0;
        return median;

        
    }
};
