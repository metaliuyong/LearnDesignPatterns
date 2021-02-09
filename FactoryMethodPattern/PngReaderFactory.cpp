//
// Created by 刘勇 on 2021/2/9.
//

#include "PngReader.h"
#include "PngReaderFactory.h"

Reader* PngReaderFactory::manufactureReader(){
    return new PngReader();
}