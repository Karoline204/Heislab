#include <elevio.h>
void logic() {

    //STOP, if STOP trykkes 1, else 0
    if (elevio_stopButton == 1) {
        stop(); //håndter alt med stop
    }

    


    for(int f = 0; f < N_FLOORS; f++){
            for(int b = 0; b < N_BUTTONS; b++){ //b =type knapp, hall up, eller hall down, eller cab
                if (elevio_callButton(f, b) ==1) {
                    //setnewOrder  vil sette f = floor, og type lik b 
                    void setOrder(f,b);
            
                // nå vil sette inn en order

            }


        } 

}