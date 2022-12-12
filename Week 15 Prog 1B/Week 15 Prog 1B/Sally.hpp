//
//  Sally.hpp
//  Week 15 Prog 1B
//
//  Created by Pippo Pesic on 11/25/22.
//

#ifndef Sally_hpp
#define Sally_hpp

#include <stdio.h>

class Sally {
public:
    int num;
    Sally();
    Sally(int);
    Sally operator+(Sally);
};

#endif /* Sally_hpp */
