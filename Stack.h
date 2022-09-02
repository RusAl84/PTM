#include <iostream>
#include <cstdlib>

using namespace std;

#ifndef TMP_STACK_H
#define TMP_STACK_H

// Определяем емкость stack по умолчанию
#define SIZE 1*1000*1000

// Класс для представления stack
class Stack {
    int *arr;
    int top;
    int capacity;
    bool debug;

public:
    Stack(int size = SIZE);         // конструктор
    ~Stack();                       // деструктор

    void push(int);

    int pop();

    int peek();

    int size();

    bool isEmpty();

    bool isFull();
};


#endif //TMP_STACK_H
