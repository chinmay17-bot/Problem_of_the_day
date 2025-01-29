class Solution {
public:

    struct ComparePairs {
        bool operator()(const pair<float, float>& p1, const pair<float, float>& p2) {

            if (p1.first == p2.first) {
                return p1.second > p2.second; 
            }
            return p1.first > p2.first;
        }
    };

    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        int n= points.size();
        priority_queue<pair<float ,float >, vector<pair<float ,float>> , ComparePairs> pq;
        
        for(int i= 0; i< n; i++){
            int x= points[i][0];
            int y= points[i][1];

            float dis= sqrt(((float)pow(x, 2)+ (float)pow(y, 2)));
            // cout << dis<<" ";
            pq.push({dis, i});
        }

        vector<vector<int>> ans;
        vector<int > temp;
        while(k--){
            auto pr= pq.top();
            temp.push_back(pr.second);
            // cout << pr.first<<" ";
            pq.pop(); 

        }

        for(int i= 0; i< temp.size(); i++){
            ans.push_back({points[temp[i]][0], points[temp[i]][1]});
        }

        return ans;
    }
};