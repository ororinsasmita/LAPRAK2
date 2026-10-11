#ifndef SINGLYLIST_H_INCLUDED
#define SINGLYLIST_H_INCLUDED

#include <iostream>
#define Nil NULL

using namespace std;

typedef int infotype;
typedef struct ElmList *address;

struct ElmList {
    infotype info;
    address next;
};

struct List {
    address first;
};


void createList(List &L);


address alokasi(infotype x);


void dealokasi(address &P);


bool isEmpty(List L);
bool ListEmpty(List L); 

void insertFirst(List &L, address P);


void insertAfter(List &L, address P, address Prec);


void insertLast(List &L, address P);


void printInfo(List L);


int nbList(List L);

#endif 
