//
// Created by Pedro on 14/12/2021.
//

#ifndef AIRLINE_AIRPORT_H
#define AIRLINE_AIRPORT_H
#include <string>
#include <vector>
#include "BST.h"
#include "Schedule.h"
#include "LocalTransport.h"

using namespace std;

class Airport {

private:
    string name;
    BST<LocalTransport> transports;
public:
    Airport(string name);
};


#endif //AIRLINE_AIRPORT_H