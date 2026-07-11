class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {

        vector<pair<int, double>> data;
        int n = position.size();

        for (int i = 0; i < n; i++) {
            double timeToReach = (double)(target - position[i]) / speed[i];
            data.push_back({position[i], timeToReach});
        }

        sort(data.begin(), data.end());

        int fleet = 0;
        double maxTime = 0;

        for (int i = n - 1; i >= 0; i--) {
            if (data[i].second > maxTime) {
                fleet++;
                maxTime = data[i].second;
            }
        }

        return fleet;
    }
};