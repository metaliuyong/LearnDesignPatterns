//
// Created by 刘勇 on 2021/2/9.
//

#include "JpgReaderFactory.h"
#include "JpgReader.h"

Reader* JpgReaderFactory::manufactureReader(){
    return new JpgReader();
}