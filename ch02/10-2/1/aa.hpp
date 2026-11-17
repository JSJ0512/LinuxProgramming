#ifndef AA_H
#define AA_H
template <typename T>
class Box {
    T value;
public:
    Box(T v);
    T getValue();
    void setValue(T v);
};
template <typename T>
Box<T>::Box(T v) {
    value = v;
}
template <typename T>
void Box<T>::setValue(T v) {
    value = v;
}
template <typename T>
T Box<T>::getValue() {
    return value;
}
#endif
