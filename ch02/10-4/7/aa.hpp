#ifndef AA_H
#define AA_H
template <typename T>
void my_sort(T first, T last)
{
    for(T i = first; i < last - 1; i++) {
     for(T j = first; j < last - 1; j++) {
        if(*j > *(j + 1)) {
            int temp = *j;
            *j = *(j + 1);
            *(j + 1) = temp;
        }
     }
    }
}
#endif
