#include "Date.h"
#include <string.h>
#include <iostream>

int main () {
    
    Date newDate = Date(2023,5,31);

    std::cout << toString(newDate) << std::endl;


}