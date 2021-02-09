//
// Created by 刘勇 on 2021/2/9.
//

#ifndef FACTORYMETHODPATTERN_JPGREADERFACTORY_H
#define FACTORYMETHODPATTERN_JPGREADERFACTORY_H

#include "ReaderFactory.h"

class JpgReaderFactory : public ReaderFactory{
public:
    Reader* manufactureReader() override;
};


#endif //FACTORYMETHODPATTERN_JPGREADERFACTORY_H
