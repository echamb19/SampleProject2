//
//  Controller.hpp
//  SampleProject2
//
//  Created by Chambers, Eden on 1/24/19.
//  Copyright © 2019 CTEC. All rights reserved.
//

#ifndef Controller_hpp
#define Controller_hpp

#include <iostream>     //doesn't know keywords yet
using namespace std;    //to make it know the keywords
                        //class writing must be bewteen #define and #endif
class Controller        //class declaration is collection of prototypes
{                       //grouped into private and public chunks
private:
    int specialNumber;
public:
    Controller();
    void start();
};


#endif /* Controller_hpp */
