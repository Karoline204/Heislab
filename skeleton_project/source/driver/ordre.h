#include <elevio.h>

typedef struct {
    int floor;
    //int pressed;
    ButtonType type;
}Order ;

typedef enum {
    IDLE,
    MOVING,
    ON_FLOOR
} State;

typedef struct {
    int floor;
    MotorDirection direction;
    Order orderlist[10];
    State state;

} Elevator;


void setOrder(int floor, ButtonType button);








