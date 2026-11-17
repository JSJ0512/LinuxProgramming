#ifndef AA_H
#define AA_H
template <typename T1, typename T2>
class GClass {
    T1 aa;
    T2 bb;
public:
    GClass();
    void set(T1 a, T2 b);
    void get(T1& a, T2& b);
    void swap();
};
template <typename T1, typename T2>
GClass<T1, T2>::GClass() {
    aa = 0;
    bb = 0;
}
template <typename T1, typename T2>
void GClass<T1, T2>::set(T1 a, T2 b) {
    aa = a;
    bb = b;
}
template <typename T1, typename T2>
void GClass<T1, T2>::get(T1& a, T2& b) {
    a = aa;
    b = bb;
}
template <typename T1, typename T2>
void GClass<T1, T2>::swap() {
    T1 temp = aa;
    aa = bb;
    bb = temp;
}
#endif
