#include <string.h> 
#include <stdio.h> 

int sol_aux(int n,int e){
    int i,  j;


    if ((n==0) || (n==1)){

        for (i=0;i<e;++i){
            printf("1,");
        }
        printf("\n");
    }
    
    else if(n<=4){
        /*printf("%d",n);*/
        /*printf(",");*/
        int cont;
        cont = e-2;
        for (i=0;i<e;++i){
            printf("%d,",n);
            /*printf("1,");*/
            for (j=0;j<=cont;++j){
                printf("1,");

            }
            printf("\n");
        }
        
        return sol_aux(n-1,e+1);

    }
    else{
        return sol_aux(n-1,e+1);
    }
    }

int sol(int n){
    if (n==0){
        printf("0 \n" );
        return -1;
    }
    else if(n==1){
        printf("1 \n" );
        return 0;

    }
    else{
        return sol_aux(n,1);
        
    }
}

int main(int argc, char *argv[]){
    if( argc == 2 ) {
      printf("Argumento que se recibio: %s\n", argv[1]);
    
      int x;
      sscanf(argv[1], "%d", &x);
      if(x>=0){
        printf("Soluciones:\n");
        return sol(x);

      }
      else{
        printf("La entrada debe ser mayor a 0.\n");
        return -1;
      }
      
      }
    else if( argc > 2 ) {
          printf("Cantidad de argumentos mayor a 1\n");
          return -1;
          }
    else {
          printf("Un argumento esperado.\n");
          return -1;
          }
    
}


