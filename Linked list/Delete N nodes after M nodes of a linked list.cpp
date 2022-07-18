// Given a linked list, delete N nodes after skipping M nodes of a linked list until the last of the linked list.

// Input:
// First line of input contains number of testcases T. For each testcase, first line of input contains number of elements in the linked list and 
// next M and N respectively space separated. The last line contains the elements of the linked list.
// Input:
// 2
// 8
// 2 1
// 9 1 3 5 9 4 10 1
// 6
// 6 1
// 1 2 3 4 5 6

// Output: 
// 9 1 5 9 10 1
// 1 2 3 4 5 6
// Testcase 1: Deleting one node after skipping the M nodes each time, we have list as 9-> 1-> 5-> 9-> 10-> 1.
  
------------------------------------------------------------------------------------------------------------------------------------------------------------------------
class Solution
{
    public:
    void linkdelete(struct Node  *head, int M, int N)
    {
        //Add code here  
        Node *curr=head;
        Node *t;
        int count;
        // Main loop that will traerse the linked list.
        while(curr){
            // to skip M nodes.
            for(count=1; count<M &&curr!=NULL; count++){
                curr=curr->next;
            }
            if(curr==NULL){// if we reach the end of the list.
                
                return;
            }
            // start from next node and delete N nodes.
            t=curr->next;
            for(count=1; count<=N &&t!=NULL; count++){
                Node *temp=t;
                t=t->next;
                delete(temp);
            }
            curr->next=t;// Link the previous list with remaining nodes.
            curr=t;// set the curr pointer for next iteration.
        }
    }
};
