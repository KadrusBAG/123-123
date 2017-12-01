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
    time->val = value;
    time->next = nullptr;
    if(head == nullptr){
        head = time;
    }
    else{
        node * last = head;
        while(last->next){
            last = last->next;
        }
        last->next = time;
    }
}

void sub(node * & head){
    node * time = new node;
    time = head->next;
    delete head;
    head = time;
}

void reverse(node * & head){
    int k = 1;
    node * left = new node;
    left = head;
    node * right = head;
    while(right->next){
        right = right->next;
        k++;
    }
    for(int i = 0; i < k/2; ++i){
        swap(left, right);
        left = left->next;
        right = right->prev;
    }
    head = left;
}

void output(node * head){
    

int main{
    node * head = nullptr;
    char op;
    while(cin >> op){
        if(op == '+'){
            add(head);
        }
        if(op == '-'){
            sub(head);
        }
        if(op == '/'){
            reverse(head);
        }
        if(op == '='){
            output(head);
        }
        if(op == 'q'){
            break;
        }
    }
}  
