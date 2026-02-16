#include <stdio.h>
#include <stdlib.h>
#include <signal.h>
#include <time.h>
#include "driver/elevio.h"



int main(){
    elevio_init();
    
    printf("=== Example Program ===\n");
    printf("Press the stop button on the elevator panel to exit\n");

    elevio_motorDirection(DIRN_UP);

    while(1){
        int floor = elevio_floorSensor();

        if(floor == 0){
            elevio_motorDirection(DIRN_UP);
        }

        if(floor == N_FLOORS-1){
            elevio_motorDirection(DIRN_DOWN);
        }


        for(int f = 0; f < N_FLOORS; f++){
            for(int b = 0; b < N_BUTTONS; b++){ //b =type knapp, hall up, eller hall down, eller cab
                int btnPressed = elevio_callButton(f, b); // finner hvilken knapp som er trykket på 
                elevio_buttonLamp(f, b, btnPressed); //den knappen som er trykket skal lyse
            }
        }

        //sjekker først om døren er åpen if (elevio_door open lamp(1))
        // deretter  sjekker om obstruction 
        if(elevio_obstruction()){
            elevio_stopLamp(1);
        } else {
                elevio_stopLamp(0);
        }

        
        
        
        if(elevio_stopButton()){
            elevio_motorDirection(DIRN_STOP);
            break;
        }
        
        nanosleep(&(struct timespec){0, 20*1000*1000}, NULL); //sover i 20ms
    }

    return 0;
}
