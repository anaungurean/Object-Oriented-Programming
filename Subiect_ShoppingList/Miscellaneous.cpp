#include "Miscellaneous.h"
#include <string>
using namespace std;


string Miscellaneous::getInfo()
{
    return getName() + ":" + to_string(this->count) + " items";
}

void Miscellaneous::setCount(int count)
{
    this->count = count;

}
