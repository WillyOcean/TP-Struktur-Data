#ifndef SLL_H_INCLUDED
#define SLL_H_INCLUDED

#include <iostream>
using namespace std;

#define info(P)(P)-> info
#define next(P)(P)-> next
#define first(NW)((NW).first)

typedef string infotype;
typedef struct element *adr;

struct element {
    infotype info;
    adr next;
};

struct List {
    adr first;
};

void createList(List &NW);
adr newElement(infotype x);
void insertFirst(List &NW, adr p);
void show(List NW);
adr deleteLast (List &NW);
adr deleteAfter(List &NW, adr p, infotype x);



#endif // SLL_H_INCLUDED
