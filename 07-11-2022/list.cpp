#include <string>
#include <iostream>

namespace UPF {
    struct node {
        std::string value;
        node *previous, *next;
    };

    struct list {
        node *first = nullptr, *last = nullptr;
        int size = 0;
    };

    int list_size(const list& l) {
        return l.size;
    }

   void list_push_front(list &l, const std::string &s) {
        node *p = new node;
        p->value = s;
        p->previous = nullptr;
        p->next = l.first;
        l.size++;
        if (l.last == nullptr) { // lista vazia
            l.last = p;
        } else {
            l.first->previous = p;
        }
        l.first = p;
   }

   void list_push_back(list &l, const std::string &s) {
        node *p = new node;
        p->value = s;
        p->previous = l.last;
        p->next = nullptr;
        l.size++;
        if (l.size == 1) {
            l.first = p;
        } else {
            l.last->next = p;
        }
        l.last = p;
   }

   void list_print(const list &l) {
        node *p = l.first;
        while (p != nullptr) {
            std::cout << p->value << " ";
            p = p->next;
        }
        std::cout << std::endl;
   }
} // namespace UPF