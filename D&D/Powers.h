//
// Created by stanl on 29/10/2024.
//
#include <iostream>
#include <string>
using namespace std;

#ifndef POWERS_H
#define POWERS_H

class Powers {
public:
    Powers(string name, string description) : name(name), description(description){};
    string getName();
    string getDescription();
    void setName(string name):
    void setDescription(string name);
    ~Powers();
private:
    string name, description;
};
#endif //POWERS_H
