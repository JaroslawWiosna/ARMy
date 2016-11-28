#ifndef AUDIO_EQUALIZER_H
#define AUDIO_EQUALIZER_H

#include "../Filter.h"

class Equalizer : public Filter{

public:
    Equalizer(File* newFile, c_parser* newParser):Filter(newFile, newParser){}
    ~Equalizer();

    void perform();

private:






};

#endif //AUDIO_EQUALIZER_H
