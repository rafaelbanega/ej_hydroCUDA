/**************
* HydroCuda model
*
* Set of hydrologic models to simulate the hydrological model response
* using c and cuda
*******************/

//// General Program Options
//enum {}

// Model domain discretization
typedef struct{
  int   nx;    // number of columns
  int   ny;    // number of rows
  float dx;    // Space discretization
  float dy;
  float *area[];
} model_domain;


