#ifndef AA_H
#define AA_H
template <class T>
class Container {
    T* p;
    int size;
public:
    Container(int n);
    ~Container();
    void set(int index, T value) {
        p[index] = value;
    }
    T get(int index);
};
template <class T>
Container<T>::Container(int n) {
    size = n;
    p = new T[size];
}
template <class T>
Container<T>::~Container() {
    delete[] p;
}
template <class T>
T Container<T>::get(int index) {
    return p[index];
}
#endif
