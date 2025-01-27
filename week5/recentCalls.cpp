class RecentCounter {
public:
    queue<int > calls;


    RecentCounter() {
        
    }
    
    int ping(int t) {
        int mi, mx;

        mi= t- 3000;
        mx= t;

        calls.push(t);

        while(!calls.empty() && calls.front()< mi){
            calls.pop();
        }

        return calls.size();
    }
};

/**
 * Your RecentCounter object will be instantiated and called as such:
 * RecentCounter* obj = new RecentCounter();
 * int param_1 = obj->ping(t);
 */