#include "SLL.h"

void createList(List &NW) {
    first(NW) = NULL;
}

adr newElement(infotype x){
    adr P = new element;
    info(P) = x;
    next(P) = NULL;
    return P;
}

void insertFirst(List &NW, adr P) {
    if (first (NW) == NULL) {
        first (NW) = P;
    } else {
        next(P) = first(NW);
        first(NW) = P;
    }
}

void show(List NW){
    if(first(NW) != NULL) {
        adr P = first(NW);
        while (P != NULL) {
            cout << info(P) << " ";
            P = next(P);
        }
        cout << endl;
    } else {
        cout << "List Kosong" << endl;
    }
}

adr deleteLast (List &NW){
    adr P, Q;
    if (first(NW) == NULL){
        P = NULL;
        cout <<"List Kosong" << endl;
    } else if (next(first(NW)) == NULL ){
        P = first(NW);
        first(NW) = NULL;
    } else {
        Q = first(NW);
        P = first(NW);
        while (next(P) != NULL) {
            Q = P;
            P = next(P);
        }
        next(Q) = NULL;
    }
    return P;
}

adr deleteAfter(List &NW, adr p, infotype x){
    adr a;
    if (first(NW) == NULL){
        p = NULL;
    }else if (next(first(NW)) == NULL ){
        p = first(NW);
        first(NW) = NULL;
    }else{
        adr z = first(NW);
        bool found;
        found = info(z) == x;
        while (z!=NULL && !found){
            found = info(z) == x;
            if (!found){
                z = next(z);
            }
        }
        if (found){
            adr temporary;
            temporary = next(z);
            next(z) = next(temporary);
            a = next(temporary);
            temporary = NULL;
        }
    }

    return a;
}

