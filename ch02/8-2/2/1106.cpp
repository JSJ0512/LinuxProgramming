#include "1106.hpp"
TV::TV() {
    size = 0;
    cout << "TV 생성" << endl;
}
void TV::setSize(int size) {
    this->size = size;
}
int TV::getSize() {
    return size;
}
WideTV::WideTV() {
    videoIn = false;
    cout << "WideTV 생상" << endl;
}
void WideTV::setVideoIn(bool videoIn) {
    this->videoIn = videoIn;
}
bool WideTV::getVideoIn() {
    return videoIn;
}
SmartTV::SmartTV() {
    ipAddr = "";
    cout << "SmartTV 생성" << endl;
}
void SmartTV::setSmartTV(int size, bool videoIn, string ipAddr) {
    setSize(size);
    setVideoIn(videoIn);
    this->ipAddr = ipAddr;
}
string SmartTV::getIpAddr() {
    return ipAddr;
}
