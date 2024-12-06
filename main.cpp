#include <string>
#include "DizionarioEsteso.cpp"

int main() {

    Dizionario<std::string> dict;

    dict.inserisci("apple", "fruit");
    dict.inserisci("car", "vehicle");
    dict.inserisci("book", "object");

    std::cout << "Value for 'apple': " << dict.recupera("apple") << "\n";
    std::cout << "Value for 'car': " << dict.recupera("car") << "\n";
    std::cout << "Value for 'pen': " << dict.recupera("pen") << "\n";

    dict.stampa();

    if(dict.appartiene("apple")){
        std::cout << "apple appartiene " << "\n";
    }else  std::cout << "apple non appartiene " << "\n";
    

    dict.cancella("apple");

     if(dict.appartiene("apple")){
        std::cout << "apple appartiene " << "\n";
    }else  std::cout << "apple non appartiene " << "\n";

    dict.stampa();

    dict.inserisci("koob", "coll");
    dict.inserisci("arc", "collis");


    dict.stampa();

    return 0;
}
