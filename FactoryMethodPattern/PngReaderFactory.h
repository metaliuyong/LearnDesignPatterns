//
// Created by 刘勇 on 2021/2/9.
//

#ifndef FACTORYMETHODPATTERN_PNGREADERFACTORY_H
#define FACTORYMETHODPATTERN_PNGREADERFACTORY_H

#include "Reader.h"
#include "ReaderFactory.h"

class PngReaderFactory : public ReaderFactory{
public:
    Reader* manufactureReader() override;
};


#endif //FACTORYMETHODPATTERN_PNGREADERFACTORY_H
