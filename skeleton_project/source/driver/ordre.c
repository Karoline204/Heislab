#include <elevio.h>
#include <ordre.h>
// setter ordre til i første element i lista, må bestemme oss for hvor vi skal putte ordre(logikk)
void setOrder(int floor, ButtonType button,Elevator * heis) {
    Order currentorder;
    currentorder.floor = floor;
    currentorder.type = button;
    heis->orderlist[0] = currentorder

}