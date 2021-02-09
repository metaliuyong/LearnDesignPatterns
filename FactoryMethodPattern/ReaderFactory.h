//
// Created by 刘勇 on 2021/2/9.
//

#ifndef FACTORYMETHODPATTERN_READERFACTORY_H
#define FACTORYMETHODPATTERN_READERFACTORY_H

#include "Reader.h"

class ReaderFactory {
public:
    virtual Reader* manufactureReader() = 0;
};


#endif //FACTORYMETHODPATTERN_READERFACTORY_H
