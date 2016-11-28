#include <lame/lame.h>

#ifndef TYPES_H
#define TYPES_H

namespace types{
    struct stream{
        short * dataL;
        short * dataR;
        unsigned int size;
        unsigned int channels;
    } ;
}

#endif