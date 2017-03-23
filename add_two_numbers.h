//
// Created by renmingxu on 2017/3/22.
//


#ifndef LEETCODE_ADD_TWO_NUMBERS_H
#define LEETCODE_ADD_TWO_NUMBERS_H

#include <iostream>
#include <vector>
using namespace std;

struct ListNode {
        int val;
        ListNode *next;
        ListNode(int x) : val(x), next(NULL) {}
    };

class add_two_numbers {
public:
    ListNode * addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode *p1, *p2, *pr;
        int tmp = 0;
        p1 = l1;
        p2 = l2;
        ListNode * result = new ListNode(0);
        pr = result;
        while(true) {
            if (p1 != NULL) {
                tmp += p1->val;
                p1 = p1->next;
            }
            if (p2 != NULL) {
                tmp += p2->val;
                p2 = p2->next;
            }
            pr->val = tmp % 10;
            tmp /= 10;
            if (p1 == NULL && p2 == NULL) {
                if (tmp > 0) {
                    pr->next = new ListNode(tmp);
                    pr = pr->next;
                }
                break;
            } else {
                pr->next = new ListNode(0);
                pr = pr->next;
            }
        }
        return result;
    }
};

#endif //LEETCODE_ADD_TWO_NUMBERS_H
