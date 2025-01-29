class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        priority_queue<int > pq;
        for(auto it: stones){
            pq.push(it);
        }

        while(pq.size()!= 1){
            int s1= pq.top(); pq.pop();
            int s2= pq.top(); pq.pop();

            int newStone = s1- s2;
            pq.push(newStone);
        }

        return pq.top();
    }
};