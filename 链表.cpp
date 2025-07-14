#include<iostream>
using namespace std;
struct List
{
    int data;
    List* next;
};
void insert(List* p, int x, int y) // 在指定位置插入节点
{
    List* q = p;
    p = p->next;
    while(p != NULL)
    {
        if(p->data == x)
        {
            break;
        }
        q = p;
        p = p->next;
    }
    List* t = new List();
    t->data = y;
    q->next = t;
    t->next = p;
}
void del(List* p, int x) // 删除指定位置节点
{
    List* q = p;
    p = p->next;
    while(p != NULL)
    {
        if(p->data == x)
        {
            q->next = p->next;
            p->next = NULL;
            delete p;
            return ;
        }
        q = p;
        p = p->next;
    }
}
int main()
{
    int n;
    cin>>n;
    List* head = new List();
    head->next = NULL; // 创建带头节点的链表
    for(int i = 0; i < n; i++)
    {
        string op;
        cin>>op;
        if(op == "insert")
        {
            int x, y;
            cin>>x>>y;
            insert(head, x, y);
        }
        if(op == "delete")
        {
            int x;
            cin>>x;
            del(head, x);
        }
    }
    List* f = head->next; // 因为带头节点，因此需要从head->next开始遍历链表
    if(f == NULL)
    {
        cout<<"NULL";
    }
    while(f != NULL)
    {
        cout<<f->data<<" ";
        f = f->next;
    }
    return 0;
}
