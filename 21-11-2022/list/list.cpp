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

int list_size(const list &l) { return l.size; }

void list_push_front(list &l, const std::string &s) {
  node *p = new node;
  p->value = s;
  p->previous = nullptr;
  p->next = l.first;
  l.size++;
  if (l.last == nullptr) { // lista estava vazia
    l.last = p;
  } else {
    l.first->previous = p;
  }
  l.first = p;
}

void list_push_back(list &l, const std::string &s) {
    node *p = new node;
    p->value = s;
    p->next = nullptr;
    p->previous = l.last;
    l.size++;
    if(l.size==1){
        l.first = p;
    }
    else{
        l.last->next = p;
    }
    l.last = p;
}

void list_print(const list &l) {
    node *p = l.first;
    while(p!=nullptr){
        std::cout << p->value << ' ';
        p = p->next;
    }
    std::cout << std::endl;
}

int list_count(const list &l, const std::string &s) {
    int cont = 0;
    node *p = l.first;
    while(p!=nullptr){
        if(p->value == s){
            cont++;
            p = p->next;
        }
    }
    return cont;
}

UPF::node *list_find(const list &l, const std::string &s) {
    node *p = l.first;
    while(p){ // mesmo que p!=nullptr
        if(p->value == s){
            return p;
        }
        p = p->next;
    }
    return nullptr;
}

void list_erase(list &l, UPF::node *p) {
    if(p!=l.first && p!=l.last){ // se for um nodo do meio
        p->previous->next = p->next;
        p->next->previous = p->previous;
    }
    if(p==l.first){ // se for o primeiro nodo
        l.first = p->next;
        if(l.first) l.first -> previous = nullptr;
    }
    if(p==l.last){ // se for o último nodo
        l.last = p->previous;
        if(l.last) l.last -> next = nullptr;
    }
    l.size--;
    delete p;
}

void list_pop_front(list &l) {
    list_erase(l, l.first);
}

void list_pop_back(list &l) {
    list_erase(l, l.last);
}

void list_clear(list &l) {
    while(l.size>0){
        list_pop_back(l);
    }
}

void list_remove(list &l, const std::string &s) {
    node *p;
    while ((p = list_find(l, s)) != nullptr) {
        list_erase(l, p);
    }
}

bool list_equal(const list &l1, const list &l2) {
    if(l1.size != l2.size) return false;
    node *pa = l1.first, *pb = l2.first;
    while(pa){
        if(pa->value != pb->value) return false;
        pa = pa->next;
        pb = pb->next;
    }
    return true;
}

} // namespace UPF