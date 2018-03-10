#ifndef TWONUMBER_H
#define TWONUMBER_H
#include <vector>
#include <iterator>

class TwoNumber
{

public:

    TwoNumber();

    //Функция которая заполняет и возвращает лист//
    static std::vector<int> getList(int, int);

protected:
    //Функция решета Эратосфена//
    static bool * rechEratosfena(int);

};

#endif // TWONUMBER_H
