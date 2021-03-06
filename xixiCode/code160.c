/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
 //*************************11111111111*********************************
struct ListNode *getIntersectionNode(struct ListNode *headA, struct ListNode *headB) {
    struct ListNode *p1 = headA;
    struct ListNode *p2 = headB;

    if (p1 == NULL || p2 == NULL) return NULL;

    while (p1 != NULL && p2 != NULL && p1 != p2) {
        p1 = p1->next;
        p2 = p2->next;

       
        if (p1 == NULL) p1 = headB;
        if (p2 == NULL) p2 = headA;
    }

    return p1;
    
}


//******************************222222222222*************************************
int length(struct ListNode *head){
    
    struct ListNode *p=head;
    int count=0;
    while(p){
    p=p->next;
    count++;
    }
    return count;
    
} 
 
struct ListNode *getIntersectionNode(struct ListNode *headA, struct ListNode *headB) {
    
    int lengthA,lengthB;
    struct ListNode *p=headA,*q=headB;
    lengthA=length(headA);
    lengthB=length(headB);
    
    while(lengthA>lengthB&&p){
        p=p->next;
        lengthA--;
    }
    while(lengthA<lengthB&&q){
        q=q->next;
        lengthB--;
    }
    
while(p!=q&&q&&p){
     p=p->next;
     q=q->next;
}

if(q==p)
return q;

else 

return NULL;

}
