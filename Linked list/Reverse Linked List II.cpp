/*Given the head of a singly linked list and two integers left and right where left <= right, reverse the nodes of the list from position left to 
position right, and return the reversed list.
  
Input: head = [1,2,3,4,5], left = 2, right = 4
Output: [1,4,3,2,5]*/
-----------------------------------------------------------------------------------------------------------------------------------------------------------------------
ListNode* reverseBetween(ListNode* head, int left, int right) {
         stack<int>s;
        int count=0;
        ListNode *temp=head;
        while(temp!=NULL)
        {
            
            count++;
            if(count>=left && count<=right)
            {
                s.push(temp->val);
            }
            temp=temp->next;
        }
        count=0;
        temp=head;
        while(temp!=NULL && !s.empty())
        {
             count++;
            if(count>=left && count<=right)
            {
                temp->val=s.top();
                s.pop();
            }
            temp=temp->next;
            
        }
        return head;
        
    }
};
