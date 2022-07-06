class Solution{
  public:
    int MissingNumber(vector<int>& array, int n) {
        // Your code goes here
        sort(array.begin(),array.end());
        //int i;
        //int diff=array[i+1]-arr[i];
        //for(int i=0; i<n;i++){
            //if(diff>1){
                //return array[i]+1; // only passed two test cases.
            //}
        //}
        for(int i=0; i<n; i++){ // correct solution
            if(array[i-1]!=i){
                return i;
            }
        }
        
        
       
        
    }
};
