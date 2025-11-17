
#include <iostream>
using namespace std;

int main() {
    float numero; 
    
    cout << "Digite o numero: "; 
    cin >> numero;
    
    if(numero >= 10 && numero <=20) {  
    cout << "O numero está no intervalo entre 10 e 20" << endl; 
}
    else { 
        cout << "O numero não está no intervalo" << endl;
}
    return 0;
}
