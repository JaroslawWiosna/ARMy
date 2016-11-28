#include "Equalizer.h"
#include "../../File/File.h"


void Equalizer::perform() {
    ///to access stream:
    /// audioFile->...;
    short *dataL = audioFile->getStream().dataL;


    ///to access params:
    /// params->...;
    double param1 = params->get_channel_num();

}

Equalizer::~Equalizer(){

}
