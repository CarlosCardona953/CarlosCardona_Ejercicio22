

#include <stdio.h>
#include <cmath>
#include <algorithm> 
#include <iostream>
#include <cstdlib>



using std::min;

void metro();

double f=0;


int main(){
    
  srand48(time(0));
  int N=50000;
  for (int i=0; i<N; i++){
      
  metro();   
  std::cout << f << std::endl;
 
  }
  
     
  return 0;
}

void metro(){
        double x1=0.0;
        double x2=0.0;       

        double propuesta  = f + ((drand48()*2)-1);
        x1= propuesta;
        x2= f;
        double k= exp(-x1*x1/2)/exp(-x2*x2/2);
        double r = min(1.0,k);
        double alpha = drand48();
            
        if (alpha<r){
            
            f=propuesta;
            
        }
        else {
            f=f;
        }



                
                
                
                
