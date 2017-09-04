#include "FastLED.h"

// How many leds in your strip?
#define NUM_LEDS 10

#define DATA_PIN 3
#define CLOCK_PIN 13

// Define the array of leds
CRGB leds[NUM_LEDS];

void setup() { 

      FastLED.addLeds<APA102, DATA_PIN, CLOCK_PIN, BGR>(leds, NUM_LEDS);

}

void loop() { 

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
