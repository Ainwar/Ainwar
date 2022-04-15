/**
 * @file testes.cpp
 * @author Alan Bartl
 * @brief 
 * @version 0.1
 * @date 2022-03-29
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include<iostream>
#include<string>
#include<math.h>
#include<algorithm>

#define NOBRACKEYS -1 

using namespace std;

/**
 * @brief 
 * @param firOp
 * @param SecOp
 * @return int 
 */
class conditions
{
    public:
        string text;
        string changes(string text){
            
            return text;
        }
    private:
};
//Brackeys DONE - matching?
//CLEARING FROM SPACE DONE
int findChar(string text, char lookingFor, int choice);
int backFindChar(string text, char lookingFor, int lastPos);
string cleaner(string text);
string sorterBaby(string text);
string solverBaby(string text);

int main(void){
    conditions NewCalculate;
    getline(cin, NewCalculate.text);

    NewCalculate.text.erase(remove(NewCalculate.text.begin(), NewCalculate.text.end(), 32 ), NewCalculate.text.end());
    cout << NewCalculate.text << endl;
    return 0;
}

string cleaner(string text){
    text.erase(remove(text.begin(), text.end(), ' '), text.end());
    return text;
}

string sorterBaby(string text){
    return;
}

//calling math bitches!!!
string solverBaby(string text){

    if(){

    }
    else if(){

    }
    else{

    }
    return;
}

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