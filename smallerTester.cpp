#include<iostream>
#include<string>

#define NUMBERS "0123456789."
#define SIGNS "!^*/+-"
using namespace std;

char sign(string text);
double math(double numberOne, double numberTwo, char signMath);

int findChar(string text, char lookingFor, int choice = 1){
    int counter = 0;
    for(int i = 0; i < text.length(); i++){
        if(text[i] == lookingFor){
            if(choice == 1){
                return i;
            }
            else{
                counter++; 
            }
        }
    }
    if(choice == 2){
        return counter;
    }
    return -1;
}

int backFindChar(string text, char lookingFor, int lastPos){ // text.lenght();
    for(int i = lastPos; i >= 0 ;i--){
        if(text[i] == lookingFor){

            return i;
        }
    }
    return -1;
}

int numberFinder(string text, int signPos,int option = 0){
    bool changePos = false;
    string numbers = NUMBERS;
    if(option){  //back
        for(int i = (signPos-1); i >= 0; i--){
            for(int k = 0; k < numbers.length(); k++){
                    if(text[i] == numbers[k]){
                        changePos = true;
                    }
            }
            if(!changePos){
                return (i+1);
            }
            changePos = false;
        }
        return 0;
    }
    else{
        for(int i = (signPos+1); i <= text.length(); i++){
            for(int k = 0; k < numbers.length(); k++){
                    if(text[i] == numbers[k]){
                        changePos = true;
                    }
            }
            if(!changePos){
                return (i-1);
            }
            changePos = false;
        }
        return text.length();
    }
}

int main(void){
    string newString = "2*10+56+100/10^2+3!";
    char signMath = '+';
    double numberone;
    double numberTwo;
    int signPosition, firstNumPos, secNumPos;
    string newSub;
    string ten;
    cout << " lenght " << newString.length() << " size " << newString.size() << endl; 
    while((signMath = sign(newString)) != 90){
        signPosition = findChar(newString, signMath);
        cout << "pos 1 " << signPosition << endl;
        firstNumPos =   numberFinder(newString, signPosition,1);
        cout << "pos 2 " << firstNumPos << endl;
        if(signMath != '!')
        secNumPos = numberFinder(newString, signPosition);
        cout << "pos 3 " << secNumPos << endl;
        numberone = stod(newString.substr(firstNumPos, signPosition));
        cout << "pos 4 " << numberone << endl;
        numberTwo = stod(newString.substr((signPosition+1), (secNumPos-signPosition))); //TODO Solve 
        cout << "pos 5 " << numberTwo <<endl;
        ten = to_string(math(numberone,numberTwo, signMath));
        cout << "pos 6 " << ten << endl;
        newString.replace(firstNumPos, (secNumPos-firstNumPos+1), ten);
        cout << newString << endl;
    }
    cout << "Size" << newString.size() << " lenght " << newString.size() << endl; 
    cout << "Im done" << endl;
    return 0;
}

double math(double numberOne, double numberTWo = 0, char signMath = '+'){
    double result = 1;
    if(signMath == '!'){
        for (int i = numberOne; i > 0; i--){
        result =  result * i;
    }
    return result;
    }
    else if(signMath == '^'){
        double c = numberOne;
        for(int i = 0; i < (numberTWo-1); i++)
            numberOne = numberOne * c;
    return numberOne;
    }
    else if(signMath == '*'){
        return numberOne*numberTWo;
    }
    else if(signMath == '/'){
        return numberOne/numberTWo;
    }
    else if(signMath == '-'){
        return numberOne-numberTWo;
    }
    else{
        return numberOne+numberTWo;
    }
}

char sign(string text){
    string signes = SIGNS; 
    for(int i = 0; i < signes.length(); i++){
        for(int k = 0; k < text.length(); k++){
            if(text[k] == signes[i]){
                
                return text[k];
            }
        }
    }
    return 90;
}

string change(string text){
    int lenght = text.length();
    return text;
}