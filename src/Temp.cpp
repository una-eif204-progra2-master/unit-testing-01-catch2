//
// Created by Maikol Guzman on 8/20/20.
//

#include "Temp.h"

Temp::Temp(int tmp) : tmp(tmp) {}

Temp::Temp() {}

Temp::~Temp() {

}

int Temp::getTmp() const {
    return tmp;
}

void Temp::setTmp(int tmp) {
    Temp::tmp = tmp;
}
