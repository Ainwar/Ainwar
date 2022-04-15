#include<iostream>

using namespace std;

class Trida {
public:
    void funkce(void) {
        cout << "Hello World!" << endl;
    };
    int scitac(int* a, int* b, int*c){
        *c = *a + *b;
        return *c;
    }
};

class SoloRunner{
private:
    int number = 0;
    void vypis(int cislo){
        number = cislo;
        cout << number << "Hello there \n nasrat" << number << endl;
    }
    int vypisDva(){
        cout << "ja jsem vypis dva \n" << "tady me mas na newLine" << endl;
        return number;
    }
};

int main() {
    int a = 1;
    int b = 5;
    int c;
    Trida _instance;
    SoloRunner newSolo;
    _instance.funkce();
    _instance.scitac(&a, &b, &c);
    newSolo.vypisDva();
    cout << c << endl;
    cin.get();
    return 0;
}