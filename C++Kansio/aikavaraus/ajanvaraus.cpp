
// tee luokka ajanvaraus

// luokan toiminnat
//  - tekemään varaus
//  - katsoa varaukset
//  - perua varaus
//  - luetaan json tiedosto

// varaukset tallennetaan json tiedosto


#include <iostream>
#include <string>
#include <fstream>
#include "json.hpp"


using namespace std;

class Ajanvaraus{
public:
    string ajanvaraus;
    string tiedostoNimi = "varaukset.txt"; //tiedoston nimi
    using json = nlohmann::json;


    json tiedostonluku(){ //funktio ajanvaraus tiedoston lukemiseen

        //string ajat; // tähän talletetaan kaikki mitä tiedostosta löytyy
        //ifstream tiedosto; //tiedoston lukeminen

        //tiedosto.open(tiedostoNimi);//tiedoston avaaminen
        std::ifstream f("varaukset.txt");
        json data = json::parse(f);
        //f.close();

        //tiedosto.close(); //sulkee tiedoston

        return data; //palauttaa kaikki ajat tiedostosta

    }

    void tallennaAika() {
        //tallentaa uusi aika tiedostoon
        std::ifstream f("varaukset.txt");
        json data = json::parse(f);
        //f.close();

        string uusiAika;
        cout << "Anna aika formaatissa yyyy-mm-dd HH:MM:SS" << endl;
        cout << "Varaa aika: ";

        cin >> uusiAika;

        json varaus = {{"pvm", uusiAika}};
        data["varaukset"].push_back(varaus);

        std::ofstream ff(tiedostoNimi);
        ff << data.dump(4);
        ff.close();


        //palauttaa tiedon onnistuuko tallennus

    }

    int poistaAika(string poistettavaAika) {

        //poistaa ajan tiefdostosta ja palauttaa tiedon onnistuuko tallennus
        return 0;
    }




};








/*string Ajanvaraus::lataaVaraukset(){
    std::ifstream tiedosto("varaukset.json");
    json data;
    if (tiedosto.is_open()){
        tiedosto >>data;
    }
    return data;

}
void ajanvaraus::tallennaVaraus(const json& uusiVaraus)
 {
     json data = lataaVaraukset();
     data.push_back(uusiVaraus);

     std::ofstream tiedosto("varaukset.json");
     tiedosto << data.dump(4);
 }

 void ajanvaraus::teeVaraus(const std::string& nimi, const std::string& aika){
    json uusiVaraus = {
    {"nimi", nimi},
    {"aika", aika}



    };
    tallennaVaraus(uusiVaraus);
 }
 void ajanvaraus
}*/
