#include <bits/stdc++.h> 
void interLeaveQueue(queue < int > & q) {

    int n= q.size()/ 2;
    queue<int > q1;
    while(n--){
        q1.push(q.front());
        q.pop();
    }

    queue<int > q2;
    while(!q.empty()){
        q2.push(q.front());
        q.pop();
    }

    while(!q1.empty() && !q2.empty()){
        q.push(q1.front());
        q.push(q2.front());

        q1.pop();
        q2.pop();
    }

    // if()
    // q.push(q2.front());


}