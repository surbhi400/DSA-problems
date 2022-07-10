queue<int> rev(queue<int> q)
{
    // add code here.
    // we know that stack follows LIFO while queue follows FIFO.
    // We are creating a stack and will push the elements of queue to stack till queue becomes empty.
     // then we will push back the elements from stack to queue and will print queue as its reversed now.
    stack<int> st;
    while(!q.empty()){
        st.push(q.front());
        q.pop();
    }
    while(!st.empty()){
        q.push(st.top());
        st.pop();
    }
    return q;
}
