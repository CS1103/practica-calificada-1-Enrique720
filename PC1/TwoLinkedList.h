//
// Created by ruben on 4/12/19.
//


#ifndef UNTITLED_TWOLINKEDLIST_H
#define UNTITLED_TWOLINKEDLIST_H

#include <fstream>
#include <string>
#include <iostream>
using namespace std;
namespace UTEC {
    struct node {
        int value;
        node *next;
        node(int valor): next{nullptr}, value{valor}{
        }
    };

    class TwoLinkedList {

    public:
        node *head1;
        node *head2;
        node *tail1;
        node *tail2;
        node *tail;
        TwoLinkedList();
        void push_back1(int valor);
        void push_back2(int valor);
        void print();
        string getlist(int valor);
        string merge(int valor);
        bool is_merged();
        node* search(int valor);
        void save(string archivo);
    };
}

#endif //UNTITLED_TWOLINKEDLIST_H
