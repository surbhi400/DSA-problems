// Given a singly linked list and a number k. Write a function to find the (N/k)th element, where N is the number of elements in the list. We need to consider ceil
// value in case of decimals.
  
// Input:
// The first line of input contains an integer T denoting the number of test cases. The first line of each test case consists of an integer N. The second line consists of 
// N spaced integers.The last line consists of an integer k.

// Output:
// Print the data value of (N/k)th node in the Linked List.
// Example:
// Input:
// 2
// 6
// 1 2 3 4 5 6
// 2
// 5
// 2 7 9 3 5
// 3

// Output:
// 3
// 7
--------------------------------------------------------------------------------------------------------------------------------------------------------------------------
int fractional_node(struct Node *head, int k)
{
    // your code here
    float N=0; 
    Node* temp=head;
    while(temp!=NULL){
        temp=temp->next;
        N++;// will give the length of linked list.
    }
    
    int count=1;//
    // Traverse in the liked list and return the data of the index that iis equal to N/k.
    while(head!=NULL){
         
        
        if(ceil(N/k)==count){
            return head->data;
        }
        
        head=head->next;
        count++;
    }
}
