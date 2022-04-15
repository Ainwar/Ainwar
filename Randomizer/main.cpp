#include<iostream>
#include<stdlib.h>
#include<string>

using namespace std;

typedef struct{
    int lenght;
    string pattern;
}dataWord;

dataWord choice(dataWord passWord){
    int random;
    cout << "Do you want random word(0) or with your pattern(1)?" << endl ;
    do{
        cin >> random;
    }while(random == 1 || random == 0);
    cout << "lenght of your password? Min 3 - Max 10" << endl;
    do{
        cin >> passWord.lenght;
    }while(passWord.lenght > 2 && passWord.lenght < 11);    
    if(1){
        passWord->pattern = new string[1];
        cout << "How should your pattern looks like? 0 = aeiou 1 = abcdfghjklmnpqrstvwxyz" << endl; 
        cin >> passWord.pattern;
    }
    return passWord;
}

void printData(dataWord* passWord){
    cout << passWord->lenght << endl;
    cout << passWord->pattern;
}

int main(void){
    dataWord newWord = choice(newWord);
    printData(&newWord);
    return 0;
}