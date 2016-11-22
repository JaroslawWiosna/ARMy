#include "../dataTypes/types.h"


class File {
public:
    File();
    ~File();
    types::stream *getStream();

    int save();
    int read();


private:
    types::stream stream;
};