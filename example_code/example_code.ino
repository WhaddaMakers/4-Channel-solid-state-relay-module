/*
  @@@@@@@@@@@@@@@@@@@@@@                                                                                                                               
  @@@@@@@@@@@@@@@@@@@@@@             @@@.    @@@    @@@.     @@@@    @@@@        @@@@@@@@@        @@@@@@@@@@@@@.     .@@@@@@@@@@@@@        @@@@@@@@@  
  @@@@@%%@@@%%@@@%%@@@@@             @@@@    @@@    @@@@     @@@@    @@@@       @@@@@@@@@@        @@@@@@@@@@@@@@     @@@@@@@@@@@@@@        @@@@@@@@@  
  @@@@@  @@@  @@@  @@@@@             @@@@    @@@    @@@@     @@@@    @@@@       @@@@   @@@@        @@@@@   @@@@@       @@@@@   @@@@       @@@@   @@@@ 
  @@@@@            @@@@@             @@@@   @@@@    @@@@     @@@@@@@@@@@@       @@@@   @@@@        @@@@@   @@@@@       @@@@@   @@@@       @@@@   @@@@ 
  @@@@@   @    @   @@@@@             @@@@   @@@@    @@@@     @@@@@@@@@@@@       @@@@@@@@@@@        @@@@@   @@@@@       @@@@@   @@@@       @@@@@@@@@@@ 
  @@@@@            @@@@@             @@@@###@@@@@##@@@@@     @@@@    @@@@      @@@@@@@@@@@@       #@@@@@###@@@@@     ##@@@@@###@@@@       @@@@@@@@@@@
  @@@@@@@@@@@@@@@@@@@@@@             @@@@@@@@@@@@@@@@@@@     @@@@    @@@@      @@@@    @@@@@      @@@@@@@@@@@@@@     @@@@@@@@@@@@@@      @@@@     @@@@
  @@@@@@@@@@@@@@@@@@@@@@
  
  Whadda WPM464 four channel Solid State Relay module example
  
  This example will repeatedly turn all 4 SSR channels on and off

  For more information about the Whadda WPM464 four channel Solid State Relay module, check the manual available at https://whadda.com
  
 
  Author: Midas Gossye (Whadda/Velleman)
  Date: 17/03/2021
  URL: https://github.com/WhaddaMakers/SSR_4ch_module
*/


const int channel1_pin = 3; // Define SSR channel 1 pin
const int channel2_pin = 4; // Define SSR channel 2 pin
const int channel3_pin = 5; // Define SSR channel 3 pin
const int channel4_pin = 6; // Define SSR channel 4 pin

void setup() {
  pinMode(channel1_pin, OUTPUT); // Define SSR channel 1 pin as output
  pinMode(channel2_pin, OUTPUT); // Define SSR channel 2 pin as output
  pinMode(channel3_pin, OUTPUT); // Define SSR channel 3 pin as output
  pinMode(channel4_pin, OUTPUT); // Define SSR channel 4 pin as output
  
  digitalWrite(channel1_pin, LOW); // Set SSR channel 1 pin LOW to disable output
  digitalWrite(channel2_pin, LOW); // Set SSR channel 2 pin LOW to disable output
  digitalWrite(channel3_pin, LOW); // Set SSR channel 3 pin LOW to disable output
  digitalWrite(channel4_pin, LOW); // Set SSR channel 4 pin LOW to disable output
  

}

void loop() {
  digitalWrite(channel1_pin, HIGH); // Set SSR channel 1 pin HIGH to enable CH1 output
  delay(3000); // Wait for 3s (=3000ms)
  digitalWrite(channel1_pin, LOW); // Set SSR channel 1 pin LOW to disable CH1 output

  digitalWrite(channel2_pin, HIGH); // Set SSR channel 2 pin HIGH to enable CH1 output
  delay(3000); // Wait for 3s (=3000ms)
  digitalWrite(channel2_pin, LOW); // Set SSR channel 2 pin LOW to disable CH1 output

  digitalWrite(channel3_pin, HIGH); // Set SSR channel 3 pin HIGH to enable CH1 output
  delay(3000); // Wait for 3s (=3000ms)
  digitalWrite(channel3_pin, LOW); // Set SSR channel 3 pin LOW to disable CH1 output

  digitalWrite(channel4_pin, HIGH); // Set SSR channel 4 pin HIGH to enable CH1 output
  delay(3000); // Wait for 3s (=3000ms)
  digitalWrite(channel4_pin, LOW); // Set SSR channel 4 pin LOW to disable CH1 output

}
