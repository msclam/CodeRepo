#include <bits/stdc++.h>

using namespace std;

struct node {
    int data;
    node* next;
};

void insertVal(node* head, int val) {
    if (head == NULL) return;
    
    node* q = head;
    while (q->next) {
        q = q->next;
    }
    
    node* p = new node;
    p->data = val;
    p->next = NULL;
    
    q->next = p;
}

void deleteVal(node* head, int val) {
    if (head == NULL) return ;
    
    node* p = head;
    while (p->next) {
        if (p->next->data == val) {
            node* q = p->next;
            p->next = q->next;
            delete q;
            q = NULL;
        } else {
            p = p->next;
        }
    }
}

int count(node* head) {
    int cnt = 0;
    node* p = head->next;
    while (p) {
        cnt++;
        p = p->next;
    }
    return cnt;
}

void print(node* head) {
    node* p = head->next;
    while (p) {
        cout << p->data << " ";
        p = p->next;
    }
}

int main() {
    int n, x;
    cin >> n;
    node* head = new node;
    for (int i = 0; i < n; i ++ ) {
        cin >> x;
        insertVal(head, x);
    }
    
    cin >> x;
    deleteVal(head, x);
    
    cout << count(head) << endl;
    print(head);
    return 0;
}