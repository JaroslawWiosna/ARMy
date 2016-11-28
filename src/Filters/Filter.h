#ifndef AUDIO_FILTER_H
#define AUDIO_FILTER_H

#include "../File/File.h"
#include "../Parser/parser.hpp"

class Filter{

public:
    Filter(File* fileHandle, c_parser* newParser):audioFile(fileHandle), params(newParser){};
    ~Filter(){};

protected:
    c_parser* params;
    File* audioFile;


};
#endif //AUDIO_FILTERS_H
