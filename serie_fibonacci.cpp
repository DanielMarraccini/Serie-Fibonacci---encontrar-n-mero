/******************************************************************************

Serie Fibonacci. Encontrar número ingresado.

*******************************************************************************/

#include <iostream>

using namespace std;

bool Fibonacci (int n){

    int n1 = 0, n2 = 1, aux;

   while(n2 >= n){

       if (n1 == n || n2 == n){

           return true;
       }
       aux = n2;
       n2 += n1;
       n1 = aux;
   }

   return false;
}

void dataInput(int& n){

    cout<<"Ingrese un número para la serie Fibonacci: "; cin>>n;
}


int main(){

    int n;

    dataInput(n);

    if(Fibonacci(n)){

        cout<<"El "<<n<<" coincide con la serie Fibonacci.";
    }else{

        cout<<"El "<<n<<" NO coincide con la serie Fibonacci.";
    }

    cin.get();
    return 0;
}
