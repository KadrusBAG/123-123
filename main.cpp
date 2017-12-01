#include iostream

using namespace std;

struct node{
    int val;
    node * next;
}

void add(node * & head){
    string stroka;
    getline(cin, stroka);
    istringstream stream(stroka);
    int value;
    stream >> value;
    node * time = new node;
    time -> val = value;
    time -> next = nullptr;
    if(head == nullptr){
        head = time;
    }
    else{
        node * last = head;
        while(last -> next){
            last = last -> next;
        }
        last -> next = time;
    }
}

void sub(node * & head){
    node * time = new node;
    time = head;
    delete head;

int main{
    node * head = nullptr;
    char op;
    while(cin >> op){
        if(op == '+'){
            add(head);
        }
        if(op == '-'){
            
