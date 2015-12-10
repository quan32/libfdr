#include <stdio.h>

typedef enum {
    stopped,
    started
} State;

struct DigitalStopWatch {
    State state;
    TimeSource source;
    di
};