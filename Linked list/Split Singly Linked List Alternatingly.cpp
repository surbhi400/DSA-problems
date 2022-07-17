/*Given a singly linked list of size N. Your task is to complete the function alternatingSplitList() that splits the given linked list into two smaller list.
The sublists should be made from alternating elements from the original list.Note: the sublist should in the order with respect to original list.
Input Format:
First line of input contains number of testcaes T. First line of each input contains length of the linked list and next line contains the elements of the linked list.

Output Format:
For each test case, in new lines, print the two sublists formed after the split.
Input:
2
6
0 1 0 1 0 1
5
2 5 8 9 6

Output:
0 0 0
1 1 1
2 8 6
5 9
*/
--------------------------------------------------------------------------------------------------------------------------------------------------------------------------
void alternatingSplitList(struct Node* head) 
{
    //Your code here
    //we are creating two pointers at head and next of head;
    //Then we are making a list of all odd posn nodes(by making one next of other ex: 1 2 3 4 5 so 1->3->5 will be our first list) and all even posn nodes as well(2->4).
    //a and b store the head of  both the list.
    Node *temp1=head;
    Node *temp2=head->next;
    Node *newhead=temp2;
    
    while(temp1->next!=NULL && temp2->next!=NULL){
        temp1->next=temp2->next;
        temp1=temp1->next;
        temp2->next=temp1->next;
        temp2=temp2->next;
    }
    temp1->next=NULL;
    a= head;
    b=newhead;
   
}
