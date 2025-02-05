#include <iostream>
#include "ajanvaraus.cpp"
#include <string>
using namespace std;

int main(){
    cout << "Ajanvarausohjelma Halikissa" << endl;
    cout << "1. Haluatko varata uuden ajan?" << endl;
    cout << "2. Haluatko katsoa varauksiasi?" << endl;
    cout << "3. Haluatko perua varauksesi?" << endl;

    // vaihe 1: kysy k�ytt�j�lt� valinta (numero 1-3)
    int valinta;
    cout << "valitse mit� haluat tehd� 1-3: ";
    cin >> valinta;
    Ajanvaraus varaus;



    //cout << "k�ytt�j� valinnut:"  << valinta;


    // vaihe 2: tee funktiot kaikille vaihtoehdoille

    switch (valinta){
    case 1:
        //cout << "Uusi varaus" << endl;
        cout << "oletko varma? k tai e: ";
        char vahvistus[1];
        cin >> vahvistus;
        if(strcmp(vahvistus, "k") == 0) {
            //cout << "Vastaus on kyll�" << endl;
            //cout << "uusi aika on syssymm�ll�";
            varaus.tallennaAika();
        } else {
            cout << "Uutta aikaa ei varattu" << endl;
        }
        // todo: ajan tallentaminen


        break;



    case 2:
        cout << endl << "T�ss� tallennetut varaukset" << endl;
        cout << varaus.tiedostonluku() << endl;

        break;


    case 3:
        cout << endl << "Varaukset peruttu" << endl;
        varaus.tiedostonluku();


        }





    return 0;


}


