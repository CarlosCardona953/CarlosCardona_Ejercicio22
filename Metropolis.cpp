


using std::cout;
using std::endl;

void metro(int N);
void fun(int x);
float f=0;

int main(){
    
  srand48(time(0));
  int N=50000;
      
  metro(N);
     
  return 0;
}

void metro(int N){
    
    for (i=0; i<N; i++){
        float propuesta  = f + (drand48()-0.5);
        float r = min(1,fun(propuesta)/fun(f));
        float alpha = drand48();
            
        if (alpha<r){
            
            f=propuesta;
            
        }
        else {
            f=f;
        }
        
        
    std::cout << f << std::endl;
    }


}

void fun(float x){
f= exp(-x*x/2);

}





                
                
                
                