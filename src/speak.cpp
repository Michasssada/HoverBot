#include "speak.h"


void speech::speak(std::string text) {
    if (text.empty()) {
        return;  // Exit the function if the text is empty
    }
    std::string command = "espeak \"" + text + "\" 2>/dev/null";//string to say
    system(command.c_str());//execute the espeak command
}
