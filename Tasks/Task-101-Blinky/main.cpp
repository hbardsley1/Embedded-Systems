#include "mbed.h"

// Create a DigitalOut “object” called greenLED. Pass constant LED1 as a “parameter”
DigitalOut GreenLED(LED1);
DigitalOut RedLED(LED3);
DigitalOut BlueLED(LED2);


//These are "commented out" and so are not part of the program. You can uncomment them by removing the // characters
//Your task is to make a sequence alternating between Green+Red and just Blue 


//The main function - all executable C / C++ applications have a main function. This is our entry point in the software
int main() 
{
    // ALL the repeating code is contained in a  “while loop”
    while(true) 
    { 
        //The code between the { curly braces } is the code that is repeated forever

        // Turn onboard LED ON  
        GreenLED = 1; 
        RedLED = 1;
        BlueLED = 0;

        // Wait 1 second (1 million microseconds)
        wait_us(500000); 

        // Turn LED OFF
        GreenLED = 0; 
        RedLED = 0;
        BlueLED = 1;

        // Wait 1 second
        wait_us(500000); 
    }

}