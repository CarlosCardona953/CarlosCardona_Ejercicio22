

#include <stdio.h>
#include <math.h>
#include <algorithm>  

using std::cout;
using std::endl;
using std::min;

void metro(int N);

double f=0;
double k=0;

int main(){
    
  srand48(time(0));
  int N=50000;
  for (i=0; i<N; i++){
      
  metro();    
  cout << f << endl;
  }
  
     
  return 0;
}

void metro(){
        double x1=0.0;
        double x2=0.0;       

        double propuesta  = f + (drand48()*2-1);
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
        
        
   
    


}





                
                
                
                
