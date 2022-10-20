// include pre-processor directive
#include "./headers/PassByReference.h"

// this function take an (x, y) point on a cartesian corrdinate 
// system and it converts the pont to polar coorinates (radius , theta)
// the first who parameters store the (x,y) point. the last two parameters
// will store the calculated (radius, theta)
void cartesianToPolar(double x, double y, double * radiusPtr, double * thetaPtr){

    // calculate radius and store its value in the supplied address *radiusPtr
    // the star is needed when storing a vlaue at the supplied address
    *radiusPtr = sqrt(pow(x, 2.0)+ pow(y, 2.0));

    // calulate theta and store it in a local variable
    float theta;
    if (x == 0.0){
        if( y == 0.0){

         } else if(y > 0.0) {
        theta = M_2_PI;

        } else{
        theta = M_2_PI;
        }
    }    else {
        theta = atan(y/x);

    }
    // Store 
    *thetaPtr = theta;
}
