#include <ordre.h>
void oppstart(){
    //få heisen til å starte i 1 etasje

    // ved oppstart så er enten heisen i første 1 etasje eller ikke, hvis den ikke er i første etasje så skal heisen til første etasje 


    //funksjon som kjøres i main FØR vi kaller på logikk - hindrer slik at knapper kan trykkes på og nye ordre legges inn FØR vi er ferdig med å "komme i startposisjon"
    // lager en heis ,med en tom liste for orderlist

    Elevator heis = {
        .floor = 0,
        .direction = DIRN_STOP,
        .orderlist = {0},
        .state = IDLE
    };
}
