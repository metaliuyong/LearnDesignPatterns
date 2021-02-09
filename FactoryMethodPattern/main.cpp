#include "Reader.h"
#include "ReaderFactory.h"
#include "JpgReaderFactory.h"
#include "PngReaderFactory.h"
#include "GifReaderFactory.h"

int main() {
    ReaderFactory *jpgReaderFactory = new JpgReaderFactory();
    Reader *jpgReader = jpgReaderFactory->manufactureReader();
    jpgReader->read();

    ReaderFactory *pngReaderFactory = new PngReaderFactory();
    Reader *pngReader = pngReaderFactory->manufactureReader();
    pngReader->read();

    ReaderFactory *gifReaderFactory = new GifReaderFactory();
    Reader *gifReader = gifReaderFactory->manufactureReader();
    gifReader->read();
    
    return 0;
}
