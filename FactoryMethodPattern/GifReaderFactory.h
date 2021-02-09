//
// Created by 刘勇 on 2021/2/9.
//

#ifndef FACTORYMETHODPATTERN_GIFREADERFACTORY_H
#define FACTORYMETHODPATTERN_GIFREADERFACTORY_H

#include "Reader.h"
#include "ReaderFactory.h"

class GifReaderFactory : public ReaderFactory{
    Reader* manufactureReader() override;
};


#endif //FACTORYMETHODPATTERN_GIFREADERFACTORY_H
