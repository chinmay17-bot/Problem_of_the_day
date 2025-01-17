class MedianFinder {
public:
    priority_queue<int > incr;
    priority_queue<int, std::vector<int>, std::greater<int>> decr;
    int turn= 1;

    MedianFinder() {
        

    }
    
    void addNum(int num) {

        if(turn== 1){
            if(incr.empty() && decr.empty()){
                incr.push(num);
            }
            else{
                int mx= decr.top();
                if(mx> num){
                    incr.push(num);
                }
                else{
                    
                    decr.pop();
                    decr.push(num);
                    incr.push(mx);
                }
                
            }

            turn= 2;
        }
        else{
            int mx= incr.top();
            if(mx< num){
                decr.push(num);
            }
            else{
                incr.pop();
                incr.push(num);
                decr.push(mx);
            }
            turn= 1;
        }


    }
    
    double findMedian() {
        
        if(incr.size() == decr.size()){
            int n= incr.top();
            int m= decr.top();

            double res= ((double)n+ (double)m)/ 2;

            return res;
        }
        
        return (double)incr.top();
        

    }
};

/**
 * Your MedianFinder object will be instantiated and called as such:
 * MedianFinder* obj = new MedianFinder();
 * obj->addNum(num);
 * double param_2 = obj->findMedian();
 */