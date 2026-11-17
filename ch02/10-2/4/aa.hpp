#ifndef AA_H
#define AA_H
template <typename T>
class Queue {
    int a;
    int b;
    int c;
    T data[100];
public:
    Queue();
    void enqueue(T element);
    T dequeue();
};
template <typename T>
Queue<T>::Queue() {
    a = 0;
    b = -1;
    c = 0;
}
template <typename T>
void Queue<T>::enqueue(T element) {
    if (c == 100) {
        return;
    }
    b = (b + 1) % 100;
    data[b] = element;
    c++;
}
template <typename T>
T Queue<T>::dequeue() {
    if (c == 0) {
        return T();
    }
    T z = data[a];
    a = (a + 1) % 100;
    c--;
    return z;
}
#endif
