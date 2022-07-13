/* Given a singly linked list of size N containing only English Alphabets. Your task is to complete the function arrangeC&V(), that arranges the consonants and vowel nodes of the list it in such a way that all the vowels nodes come before the consonants while maintaining the order of their arrival.

Input:
The function takes a single argument as input, the reference pointer to the head of the linked list. There will be T test cases and for each test case the function will be called separately.

Output:
For each test case output a single line containing space separated elements of the list.

User Task:
The task is to complete the function arrange() which should arrange the vowels and consonants as required.

Constraints:
1 <= T <= 100
1 <= N <= 100

Example:
Input:
2
6
a e g h i m
3
q r t

Output:
a e i g h m
q r t

Explanation:
Testcase 1: Vowels like a, e and i are in the front, and consonants like g, h and m are at the end of the list. */
--------------------------------------------------------------------------------------------------------------------------------------------------------------------------
struct Node* arrange(Node *head)
{
   //Code here
   if(head==NULL || head->next==NULL)
    return head;
  // We are making two linked list in which we wills tore our consonents and vowels.
  // Now to the next of linked list containing vowels we will add consonents and will return its head; 
  // If vowels are not present then return consonents.
   Node* conshead=new Node('0');
   Node* vowelhead=new Node('0');
   Node* cons=conshead;
   Node* vowel=vowelhead;
   
   Node* temp=head;
   while(temp!=NULL){
       if(temp->data=='a'|temp->data=='e'||temp->data=='i'||temp->data=='o'||temp->data=='u'){
           vowel->next=temp;
           vowel=vowel->next;
       }
       else{
           cons->next=temp;
           cons=cons->next;
       }
       temp=temp->next;
   }
   conshead=conshead->next;
   vowelhead=vowelhead->next;
   
   vowel->next=conshead;
   cons->next=NULL;
   
   if(vowelhead==NULL){
        return conshead;
   }
   return vowelhead;
}  
