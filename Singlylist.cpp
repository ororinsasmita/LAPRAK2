#include "Singlylist.h"

//soal 4.2.1
void createList(List &L) {
    L.first = Nil;
}

address alokasi(infotype x) {
    address P = new ElmList;
    P->info = x;
    P->next = Nil;
    return P;
}

void dealokasi(address &P) {
    delete P;
    P = Nil;
}

bool isEmpty(List L) {
    return L.first == Nil;
}

bool ListEmpty(List L) {
    return isEmpty(L);
}

//soal 4.2.2
void insertFirst(List &L, address P) {
    P->next = L.first;
    L.first = P;
}

void insertAfter(List &L, address P, address Prec) {
    P->next = Prec->next;
    Prec->next = P;
}

void insertLast(List &L, address P) {
    if (isEmpty(L)) {
        insertFirst(L, P);
    } else {
        address Q = L.first;
        while (Q->next != Nil) {
            Q = Q->next;
        }
        Q->next = P;
    }
}

//soal 4.3.3
void printInfo(List L) {
    address P = L.first;
    while (P != Nil) {
        cout << P->info << " ";
        P = P->next;
    }
    cout << endl;
}

int nbList(List L) {
    int n = 0;
    address P = L.first;
    while (P != Nil) {
        n++;
        P = P->next;
    }
    return n;
}
