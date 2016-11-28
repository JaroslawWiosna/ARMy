#ifndef FILE_H
#define FILE_H

#include "../dataTypes/types.h"
#include "../Parser/parser.hpp"

class File {
public:
    File(c_parser* params): params(params){
        // init parameters of the stream
    };
    ~File();
    types::stream getStream();

    int save();
    int read();

private:
    types::stream stream;
    c_parser* params;
};

#endif