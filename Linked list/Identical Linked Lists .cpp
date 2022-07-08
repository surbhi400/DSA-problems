
// when use function to check it only passed 2 test cases. 
//int length(Node *head){
    //int l=0;
    //Node *temp=head;
    //while(temp!=NULL){
        //l++;
        //temp=temp->next;
    //}
    //return l;
//}
//Function to check whether two linked lists are identical or not. 
bool areIdentical(struct Node *head1, struct Node *head2)
{
    // Code here
    Node *pt1=head1;
    Node *pt2=head2;
    //int N=length(head1);
    //int M=length(head2);
    
    
    while(pt1!=NULL && pt2!=NULL){
        if(pt1->data!=pt2->data){
            return false;
        } 
            
            pt1=pt1->next;
            pt2=pt2->next;
        }
    
    // checking if the lengths are same or not.
    if(pt1!=NULL) return false; 
    if(pt2!=NULL) return false;
    return true;
    
}
