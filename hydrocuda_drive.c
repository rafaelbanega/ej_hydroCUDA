/**************
* HydroCuda model
*
* Set of hydrologic models to simulate the hydrological model response
* using c and cuda
*******************/

#include "hydrocuda.h"

//global variables


int main (int argc, char *argv[])
{
// Variable declraration

    // Model Initialization
    init_options();
    init_params();
    init_states();
    init_times();
    init_forcing(); //init forcing 
    
    //Aca es donde iteramos por bloques llamando a la f
    for(itblock = 0; itblock<nblock,itblock++){
        //esta funcion tiene que ser la que se aplica cuda
        compute_waterbalance();        
        compute_transit();
        //Leemos el siguient bloque de datos temporales
        update_forcing();
    }
    
    
    return 0
}
