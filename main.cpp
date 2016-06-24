#include <iostream>
#include <sstream>
#include <vector>
#include <string>
#include <stdio.h>
using std::cout;
using std::cin;
using std::cerr;
using std::endl;
using std::vector;
using namespace std;
int menu();
int main(int argc, char const *argv[]){
        int opcion;
        while((opcion = menu()) != 4){
                if (opcion == 1){
			int tam=0;
                        string cadena;
                        cout << "Ingrese Palabra Que Desea Encriptar SIN ESPACIO: " << endl;
			//cin >> cadena;
			getline(cin,cadena);
			getline(cin,cadena);
			tam = (int)cadena.length();
                       	for (int i =0; i < tam; i++){
                                if(isalpha(cadena[i])){
                                        cadena[i] = tolower(cadena[i]);
                                        for (int i2=0; i2<3; i2++){
                                                if(cadena[i] == 'z'){
                                                        cadena[i]='a';
                                                }else{
                                                        cadena[i]++;
                                                }
                                        }
                                }
                        }
			cout << endl;
			cout << "Palabra En Cipher: " << cadena << endl;
			cout << endl;
                }
		if(opcion == 2){
			int tam=0;
                        string cadena;
                        cout << "Ingrese Palabra Que Desea Encriptar SIN ESPACIO: " << endl;
                        //cin >> cadena;
                        getline(cin,cadena);
                        getline(cin,cadena);
                        tam = (int)cadena.length();
                        for (int i=0; i <tam; i++){
                                if(isalpha(cadena[i])){
                                        cadena[i] = tolower(cadena[i]);
                                        for (int i2=0; i2<3; i2++){
                                                if(cadena[i] == 'a'){
                                                        cadena[i]='z';
                                                }else{
                                                        cadena[i]--;
                                                }
                                        } 
                                }
                        }
			cout << endl;
                        cout << "Palabra Desencriptada: " << cadena << endl;
			cout << endl;
		}
		if(opcion == 3){
			string cardNumber;
    			int sum(0), sumOfDoubleEven(0), sumOfOdd(0), evenDigit(0), oddDigit(0);
			do{
				cout << endl << "Ingrese Numero A Validar O 's' Para Salir: " << endl;
				cin >> cardNumber;
				if (cardNumber == "n") 
					break;
				for (int digitPosition=cardNumber.length(); digitPosition>0; digitPosition--){
				    	if (digitPosition%2 == 0){
						oddDigit=(int)cardNumber[digitPosition-1]-'0';
						sumOfOdd=sumOfOdd+oddDigit;
				    	}
				    	else{
						evenDigit=((int)cardNumber[digitPosition-1]-'0')*2;
						evenDigit=evenDigit%10+evenDigit/10;
						sumOfDoubleEven=sumOfDoubleEven + evenDigit;
				    	}
				}
				sum=sumOfOdd+sumOfDoubleEven;
				cout << endl <<"El Numero Que Ingreso Es ";
				if (sum%10==0)
				    cout << "Valido" << endl;
				else
				    cout << "Invalido" << endl;				
			}while (cardNumber != "s");
		}
        }
        return 0;
}
int menu(){
        int opcion;
	cout << endl;
        cout << "---------------Menu---------------" << endl;
        cout << "1. Encriptar" << endl;
        cout << "2. Desencriptar" << endl;
        cout << "3. Verificar Tarjeta de Credito" << endl;
        cout << "4. Salir" << endl;
	cout << "Ingrese Opcion: " << endl;
	cin >> opcion;
        return opcion;

}

