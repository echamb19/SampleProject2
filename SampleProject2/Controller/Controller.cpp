//
//  Controller.cpp
//  SampleProject2
//
//  Created by Chambers, Eden on 1/24/19.
//  Copyright © 2019 CTEC. All rights reserved.
//

#include "Controller.hpp"   //can only #include hpp files

Controller :: Controller()  //Without class, I need a prototype UNLESS it's int main()
{
    this->specialNumber = 123456;   //'this->' works as a this. does in Java
}

void Controller :: start()
{
    cout << "Ths is inside the start method! Neato! :D" << endl;    //endl == endline
    cout << "I don't know what to type here, but this  is something." << endl;
    cout << "Months that begin on a Sunday will always have a 'Friday the 13th.'" << endl;
    cout << "This is how yu access a variable: " << specialNumber << endl;  //if you don't assign a variable, it gives you a random number or other people's info
    cout << "Separate chhunks with the << just like a '+' and Strings in Java" << endl;
    specialNumber = 123;    //This also works
    string answer;
    cout << "Type in your name!" << endl;
//    cin >> answer;  //As soon as it hits white space, it stops [spaces are white space]
//    cout << "You typed: " << answer << endl;
    getline(cin, answer);
    cout << "You typed: " << answer << endl;
}
