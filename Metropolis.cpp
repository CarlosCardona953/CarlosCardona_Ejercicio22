

#include <stdio.h>
#include <cmath>
#include <algorithm> 
#include <iostream>
#include <cstdlib>



using std::min;

void metro(int N);
void fun (int x);

int main(){
    
  
  int n=100000;       
  metro(n);   
  return 0;
}

void metro(int N){
    
    srand48(time(0));
    double sgm =1.0;
    double f=drand48();
    double x1=0.0;
    double x2=0.0; 
    double propuesta;
    double alpha;
    
        for (int i=0; i<N; i++){
        
        std::cout << f << std::endl;
                 
        propuesta  = f + ((drand48()*2)-1);
        x1= propuesta;
        x2= f;
        double k= exp(-x1*x1/2*(sgm*sgm))/exp(-x2*x2/2*(sgm*sgm));
        double r = min(1.0,k);
        alpha = drand48();
            
        if (alpha<r){
            
            f=propuesta;
            
        }
        else {
            f=f;
        }
        }
}
