
#include <iostream> 
using namespace std; 

int main() { 
    int numero; 
    
    cout << "Verificação de Par e Ímpar" << endl; 
    
    for (int i = 1; i <= 10; i++) { 
        cout << "Digite o" << i << "Numero: "; 
        cin >> numero; 
        
        if(numero % 2 == 0) { 
            cout << numero << "É PAR." << endl; 
        } 
        else { 
            cout << numero << "É Impar." << endl; 
        }
    }
    
    return 0; 
}
