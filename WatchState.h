#ifndef WatchState_h
#define WatchState_h

typedef struct WatchState *WatchStatePtr;

typedef void (*EventStartFunc)(WatchStatePtr);
typedef void (*EventStopFunc)(WatchStatePtr);

struct WatchState {
    EventStartFunc start;
    EventStopFunc stop;
};

void defaultImplementation(WatchStatePtr state);

#endif