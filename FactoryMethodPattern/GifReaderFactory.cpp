//
// Created by 刘勇 on 2021/2/9.
//

#include "GifReader.h"
#include "GifReaderFactory.h"

Reader* GifReaderFactory::manufactureReader(){
    return new GifReader();
}