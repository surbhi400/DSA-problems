/*Given a singly linked list, your task is to remove every kth node from the linked list.
The first line of input contains number of test cases T. Then T test cases follow.
Every test case contains 3 lines. First line of every test case contains an integer N denoting the size of the linked list .
The second line contains N space separated values of the linked list. The third line contains an integer K.
Input:
2
8
1 2 3 4 5 6 7 8
3
4
1 2 3 4
2

Output:
1 2 4 5 7 8
1 3
*/
--------------------------------------------------------------------------------------------------------------------------------------------------------------------------
Node* deleteK(Node *head,int K)
{
  //Your code here
  if(K==1){// if we will delete every kth node(1st) then no node will be left then return null.
      return NULL;
  }
  Node *temp=head;
  Node *prev=NULL;
  int count=0;
  
  while(temp!=NULL){
      count++;
      if(count==K){
           prev->next=temp->next;
          count=0;// once we found the kth node, make count=0 again and find kth node starting from that node and so on.
          }
      prev=temp;
      temp=temp->next;
  }
  return head;
}
