typedef struct {
    Doorstate is_open;
    double timer;
}Door ;

typedef enum { 
    DOOR_OPEN   = 1,
    DOOR_CLOSE   = 0
} Doorstate;
