#include <iostream>

using namespace std;

struct ListNode {
      int val;
      ListNode *next;
      ListNode() : val(0), next(nullptr) {}
      ListNode(int x) : val(x), next(nullptr) {}
      ListNode(int x, ListNode *next) : val(x), next(next) {}
};

ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        if(l1.next==nullptr){
            return l1->val;
        }
        if(l2.next==nullptr){
            return l2->val;
        }
        return (l1->next,l2->next);
}




int main()
{


    return 0;
}
