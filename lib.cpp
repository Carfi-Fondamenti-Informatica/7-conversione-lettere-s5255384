#include<iostream>
#include"lib.h"

using namespace std;

bool Carattere (char &x){

    if(x>='a' && x<='z'){
        x=x+224;
        return true;
    }
    else if(x>='A' && x<='Z'){
        x=x+32;
        return true;
    }

    else
        return false;

}
