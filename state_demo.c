//#include <stdio.h>
//#include <stdlib.h>
//#include "WatchState.h"
//#include "StartedState.h"
//#include "StoppedState.h"
//
//struct DigitalStopWatch {
//    struct WatchState state;
//    int a;
//    int b;
//};
//
//typedef struct DigitalStopWatch *DigitalStopWatchPtr;
//
//DigitalStopWatchPtr createWatch(void) {
//    DigitalStopWatchPtr instance = malloc(sizeof(*instance));
//    if (instance != NULL) {
//        transitionToStoped(&instance->state);
//    }
//    
//    return instance;
//}
//
//void destroyWatch(DigitalStopWatchPtr instance) {
//    free(instance);
//}
//
//void startWatch(DigitalStopWatchPtr instance) {
//    instance->state.start(&instance->state);
//}
//
//void stopWatch(DigitalStopWatchPtr instance) {
//    instance->state.stop(&instance->state);
//}