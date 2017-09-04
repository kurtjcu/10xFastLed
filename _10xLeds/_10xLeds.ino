#include "FastLED.h"

// How many leds in your strip?
#define NUM_LEDS 5

#define DATA_PIN 3                // The pin we send the LED colour information to.
#define CLOCK_PIN 13              // Clock signal for timing of the Data Packets

// Define the array of leds
CRGB leds[NUM_LEDS];

void setup() { 
      FastLED.addLeds<APA102, DATA_PIN, CLOCK_PIN, BGR>(leds, NUM_LEDS);    // sets up our array of LEDs
}

void loop() { 

  // For each LED in the strip starting with the first, 
  // then in the next loop use the second, etc, until
  // we get to the NUM_LEDS strip length.
  for(int i = 0; i < NUM_LEDS; i++)   
  { 
    // Turn the LED on, then pause
    leds[i] = CRGB::Red;              // set the colour to red
    FastLED.show();                   // send our colour information to the LED Strip
    delay(100);                       // Wait for 100milliseconds (1/10th of a second
    // Now turn the LED off, then pause
    leds[i] = CRGB::Black;            // Turn Off the LED
    FastLED.show();
    delay(100);
  }

    for(int i = 0; i < NUM_LEDS; i++)
  { 
    // Turn the LED on, then pause
    leds[i] = CRGB::Green;
    FastLED.show();
    delay(100);
    // Now turn the LED off, then pause
    leds[i] = CRGB::Black;
    FastLED.show();
    delay(100);
  }

    for(int i = 0; i < NUM_LEDS; i++)
  { 
    // Turn the LED on, then pause
    leds[i] = CRGB::Blue;
    FastLED.show();
    delay(100);
    // Now turn the LED off, then pause
    leds[i] = CRGB::Black;
    FastLED.show();
    delay(100);
  }
}
