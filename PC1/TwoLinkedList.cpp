//
// Created by enrique.sobrados on 12/04/2019.
//

#include "TwoLinkedList.h"
UTEC::TwoLinkedList::TwoLinkedList(): head1{nullptr}, head2{nullptr}, tail{nullptr},tail1{nullptr}, tail2{nullptr} {

}
void UTEC::TwoLinkedList::push_back1(int valor) {
    node *temp = new node(valor);
    if(tail!=nullptr){
        tail->next = temp;
        tail = temp;
    }
    else {
        if (head1 == nullptr && tail1 == nullptr) {
            tail1 = temp;
            head1 = temp;
        } else {
            tail1->next = temp;
            tail1 = temp;
        }
    }
}
void UTEC::TwoLinkedList::push_back2(int valor) {

    node* temp = new node(valor);
    if(tail!=nullptr){
        tail->next = temp;
        tail = temp;
    }
    else {
    if (head2 == nullptr && tail2 == nullptr) {
        tail2 = temp;
        head2 = temp;
    } else {
        tail2->next = temp;
        tail2 = temp;

    }
}
}
void UTEC::TwoLinkedList::print() {
    if ( head1 == tail1){
        std::cout << head1 << "  " << tail1 << std::endl;
    }
    else{

        node* temp = head1;
        while(temp->next != nullptr){
        std::cout << temp->value << std::endl;
        temp = temp->next;}
        std::cout << temp->value << std::endl;
    }
    if ( head2 == tail2){
        std::cout << head2 << "  " << tail2 << std::endl;
    }
    else{

        node* temp = head2;
        while(temp->next != nullptr){
            std::cout << temp->value << std::endl;
            temp = temp->next;}
        std::cout << temp->value << std::endl;
    }
}
string UTEC::TwoLinkedList::merge(int valor){
        node* temp = new node(valor);
        if( tail == nullptr){
        tail  = temp;
        tail1->next = tail;
        tail2->next = tail;
            return("Operación Exitosa");
        }
        else{
            return("Operación duplicada");

        }


}


string UTEC::TwoLinkedList::getlist(int valor) {
    string a= "";

    if( valor == 1){
        node* temp = head1;
    while(temp->next != nullptr && temp->next !=tail){
        a = a + to_string(temp->value) + " ";
        temp = temp->next;}
    a = a + to_string(temp->value) + " ";
    }
    else if( valor == 2){
        node* temp = head2;
        while(temp->next != nullptr && temp->next !=tail){
            a = a + to_string(temp->value) + " ";
            temp = temp->next;
        }
        a = a + to_string(temp->value) + " ";
    }else if( valor == 0){
        node* temp = tail1->next;
        if(tail1->next == nullptr){
            return a;
        }
        else{
        while(temp->next != nullptr){
            a = a + to_string(temp->value) + " ";
            temp = temp->next;
        }
        a = a + to_string(temp->value) + " ";
        }
    }
    return a;
}
bool UTEC::TwoLinkedList::is_merged() {
    return tail1->next!= nullptr && tail2->next!= nullptr;
}
void UTEC::TwoLinkedList::save(string archivo) {
    fstream salida(archivo,ios::out);
    node* temp = head1;
    while(temp->next!= tail1){
        salida << temp->value << ", ";
        temp = temp->next;}
    salida << temp->value << ", ";
    temp = temp->next;
    salida << temp->value << " "<< endl;
    node* temp2 = head2;
    while(temp2->next!= tail2){
        salida << temp2->value << ", ";
        temp2= temp2->next;}
    salida << temp2->value << ", ";
    temp2 = temp2->next;
    salida << temp2->value << " " << endl;
    node* temp3 = tail1->next;
    while(temp3->next!= tail){
        salida << temp3->value << ", ";
        temp3= temp3->next;}
    salida << temp3->value << ", ";
    temp3 = temp3->next;
    salida << temp3->value << " ";

}
UTEC::node* UTEC::TwoLinkedList::search(int valor) {
    node* temp = new node(valor);
    node* temp2 = head1;
    while(temp2->next!= tail1){
        if(temp2 == temp){
            temp=temp2;
            return temp;
        }
        else{
            temp2= temp2->next;
            }
}
    node* temp3=head2;
    while(temp3->next!= tail2){
        if(temp3 == temp){
            temp= temp3;
            return temp;
        }
        else{
            temp3= temp3->next;
        }
    }
    node*temp4= tail1->next;
    while(temp4->next!= tail2){
        if(temp4 == temp){
            temp= temp4;
            return temp;
        }
        else{
            temp4= temp4->next;
        }
    }
}
