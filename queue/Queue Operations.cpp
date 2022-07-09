class Solution{
    public:
    // Function to insert element into the queue
    void insert(queue<int> &q, int k){
        // Your code here
        q.push(k);
    }
    
    // Function to find frequency of an element
    // return the frequency of k
    int findFrequency(queue<int> &q, int k){
        // Your code here
        
        int size=q.size();
        int freq=0;
        for(int i=0; i<size; i++){
            int temp=q.front();
            if(temp==k)
                freq++;
                q.pop();
                q.push(temp);
            }
        
       return freq>0?freq:-1; 
    }
    
};
