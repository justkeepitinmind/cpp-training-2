#include "list.h"

using namespace mystl;

list::list(int _val)
{
    list_node* new_node = new list_node(_val);
    head = new_node;
}

list::~list()
{
    auto cur = head;
    for (auto nxt = cur->next; cur; cur = nxt) {
        nxt = cur->next;
        delete cur;
        cur = nxt;
    }
}

void list::push_back(int _val)
{
    auto cur = head;
    while (cur->next != nullptr) {
        cur = cur->next;
    }
    list_node* new_node = new list_node(_val);
    cur->next = new_node;
}

void list::pop_front()
{
    auto tmp = head;
    head = head->next;
    delete tmp;
}
