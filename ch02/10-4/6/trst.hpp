#ifndef TEST_HPP
#define TEST_HPP
template <class aaa>
aaa my_max_element(aaa first , aaa last) {
    aaa max = first;
    for (aaa it =first; it != last;it++) {
        if (*max < *it) max = it;
    }
    return max;
}
template <class aaa>
aaa my_min_element(aaa first , aaa last) {
    aaa min = first;
    for (aaa it=first; it != last;it++) {
        if (*it< *min) min = it;
    }
    return min;
}
#endif
