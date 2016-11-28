#include "Delay.h"

void Delay::perform() {
    ///to access stream:
    /// audioFile->...;
    short *dataL = audioFile->getStream().dataL;


    ///to access params:
    /// params->...;
    double param1 = params->get_channel_num();

}

Delay::~Delay() {

}