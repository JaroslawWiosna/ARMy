#ifndef AUDIO_DELAY_H
#define AUDIO_DELAY_H

#include "../Filter.h"

class Delay : public Filter{

public:
    Delay(File* newFile, c_parser* newParser):Filter(newFile, newParser){}
    ~Delay();

    void perform();

private:






};

#endif //AUDIO_DELAY_H
