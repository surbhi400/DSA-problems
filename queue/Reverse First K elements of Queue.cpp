queue<int> modifyQueue(queue<int> q, int k) {
    // add code here.
  // We are taking a new queue(qt) and stack(s) and are pushing k elements from quque(q) to stack(s).
  // Then push elements of stack(s) to our queue(qt).
  // At last push elements from queue(q) to queue(qt) and return qt.
    stack<int> s;
    queue<int> qt;
    while(k--){
        s.push(q.front());
        q.pop();
    }
    
    while(!s.empty()){
        qt.push(s.top());
        s.pop();
    }
    
    while(!q.empty()){
        qt.push(q.front());
        q.pop();
    }
    return qt;
    
}
