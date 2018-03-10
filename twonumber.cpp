#include "twonumber.h"
#include <list>
#include "iostream"
TwoNumber::TwoNumber()
{
}

bool * TwoNumber::rechEratosfena(int numberTwo)
{
    bool * array = new bool[numberTwo+1];
    for (int i = 2; i < numberTwo + 1; i++)
        array[i] = 1;

    for (int p = 2; p < numberTwo + 1; p++)
    {
        if (array[p] != 0)
            for (int j = p*p; j <  numberTwo + 1; j += p)
                array[j] = 0;
    }
    return array;

}

std::vector<int> TwoNumber::getList(int numberOne, int numberTwo)
{
    bool * array = rechEratosfena(numberTwo);
    std::vector<int> lstSimpl;
    if(numberOne>1){
        for (int p =  numberOne; p < numberTwo + 1; p++)
            if(array[p] != 0){
                lstSimpl.push_back(p);
            }
    }
    else{
        for (int p =  2; p < numberTwo + 1; p++)
            if(array[p] != 0){
                lstSimpl.push_back(p);
            }
    }
    delete[] array;
    return lstSimpl;
}


