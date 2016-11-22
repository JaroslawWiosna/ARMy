#include <lame/lame.h>

namespace types{
    typedef struct stream{
        lame_t lame;
        FILE * wav_file;
        short int * pcm_buffer;
        unsigned char * mp3_buffer;
        unsigned long mp3_buffer_size;
        unsigned long first_sample;
        unsigned long n_samples;
        unsigned long items_read;
        unsigned long mp3_bytes_to_write;
        pthread_mutex_t *mutexForReading;
    } ;
}