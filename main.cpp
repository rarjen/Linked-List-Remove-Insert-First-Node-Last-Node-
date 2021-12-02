#include <iostream>

using namespace std;

struct node{
    int data;
    node *next;
};

struct node *head, *tail, *temp, *hapus, *prehapus;

void create(int x){
    head = new node();
    head -> data = x;
    head -> next = tail;
    tail = head;
}

void InsertDepan(int x){
    temp = head;
    temp = new node;
    temp -> data = x;
    temp -> next = head;
    head = temp;
}

void InsertBelakang(int x){
    tail = head;
    tail -> data = x;
    while(tail -> next = NULL){
        tail = tail -> next;
    }
    tail -> next = temp;
    tail = temp;
}

void HapusDepan(){
    hapus = head;
    head = head -> next;
    hapus -> next = NULL;
    free(hapus);
}

void HapusBelakang(){
    hapus = head;
    while(hapus -> next != NULL){
        prehapus = hapus;
        hapus = hapus -> next;
    }
    prehapus -> next = NULL;
    free(hapus);
}

void cetak(){
    temp = head;
    while(temp != NULL){
        cout << temp -> data << "-";
        temp = temp -> next;
    }
}

int main()
{
    create(20);
    create(30);
    create(23);
    create(40);
    cetak();
    cout << endl;
    //InsertDepan(10);
    //cetak();
    //InsertBelakang(50);
    HapusDepan();
    cetak();
    cout << endl;
    HapusBelakang();
    cetak();

    return 0;
}
