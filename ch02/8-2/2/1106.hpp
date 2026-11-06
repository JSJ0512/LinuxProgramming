#ifndef _1106_HPP
#define _1106_HPP
#include <iostream>
#include <string>
using namespace std;
class TV {
private:
    int size;
public:
    TV() { size = 20; }
    TV(int size) { this->size = size; }
    int getSize() { return size; }
};
class WideTV : public TV {
private:
    bool videoIn;
public:
    WideTV(int size, bool videoIn) : TV(size) { this->videoIn = videoIn; }
    bool getVideoIn() { return videoIn; }

};
class SmartTV : public WideTV {
private:
    string ipAddr;
public:
    SmartTV(string ipAddr, int size) : WideTV(size, true) {
        this->ipAddr = ipAddr;
    }
    string getIpAddr() { return ipAddr; }
};
#endif
