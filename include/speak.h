/*
this is the text to speech
to use it just create a class object then execute the speak function
example
speech.speak("hello world!")
*/
#ifndef SPEAK_H
#define SPEAK_H

#include <string>
#include <iostream>
#include <cstdlib>  // For system() function
class speech {
    public:
        void speak(std::string text); 
};

#endif
