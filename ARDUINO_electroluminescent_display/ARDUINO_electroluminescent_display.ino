// Electroluminescent Display with Arduino UNO and Sparkfun El Escudo Dos shield

// created by upir, 2025
// youtube channel: https://www.youtube.com/upir_upir

// YouTube video: https://youtu.be/MtiuXPFYjX8
// Source files: https://github.com/upiir/arduino_uno_electroluminescent_display


// Links from the video:
// Do you like this video? You can buy me a coffee ☕: https://www.buymeacoffee.com/upir
// Arduino UNO: https://s.click.aliexpress.com/e/_AXDw1h
// EL Electroluminescent Panel: https://s.click.aliexpress.com/e/_op745Dc
// 5V USB Electroluminescent Inverter: https://s.click.aliexpress.com/e/_oFHj0yq
// Sparkfun EL Escudo Dos documentation: https://learn.sparkfun.com/tutorials/el-sequencerescudo-dos-hookup-guide/all
// Arduino Jumper Wires: https://s.click.aliexpress.com/e/_oF84G1C
// Apollo DSKY watch: https://apollo-instruments.com/
// Apollo DSKY video: https://youtu.be/vA0l_xvBmug?si=Za3FFG00gtw2ADnE
// Creating EL display (Applied Science): https://youtu.be/Z2o_Sp2-aBo?si=RGU2vqOo4spmbs0O
// EL wires: https://s.click.aliexpress.com/e/_opzF6Fy
// Color EL panels: https://s.click.aliexpress.com/e/_oEVfF0a

// Related videos with segmented displays:
// I made Teenage Engineering display at home: https://youtu.be/CeOC7Bf_YKw
// Have you seen this display?: https://youtu.be/9JRgl6mOAfM
// Arduino Breadboard Display: https://youtu.be/DD9FJr9zQ0U
// Transparent Edgelit Display: https://youtu.be/Cg9MDF1VE2g
// Is this the SIMPLEST display?: https://youtu.be/_pNuaVKABN4
// Posy’s designs ➔ REAL DISPLAYS: https://youtu.be/jz01j1TpM84
// Arduino + Ynvisible Displays: https://youtu.be/lxeH1ilL2T0
// Arduino E-ink: https://youtu.be/Rf-E-7fFop0


// define segments
#define seg_A 3
#define seg_B 2
#define seg_C 6
#define seg_D 8
#define seg_E 7
#define seg_F 4
#define seg_G 5



void setup() {                

  // Initialize the pins as outputs
  pinMode(seg_A, OUTPUT);  // channel A  
  pinMode(seg_B, OUTPUT);  // channel B   
  pinMode(seg_C, OUTPUT);  // channel C
  pinMode(seg_D, OUTPUT);  // channel D    
  pinMode(seg_E, OUTPUT);  // channel E
  pinMode(seg_F, OUTPUT);  // channel F
  pinMode(seg_G, OUTPUT);  // channel G
  pinMode(9, OUTPUT);  // channel H

  //Uncomment the following line if using this on the EL Escudo Dos. 
  // Pin 10 is a status LED on the EL Escudo.  
  pinMode(10, OUTPUT);

  //Pin 13 is the status LED on both the EL Sequencer and Arduino for use with the EL Escudo Dos. 
   pinMode(13, OUTPUT);    
}


/*******************Main Loop***************************/
void loop() 
{
 

  // show digits 0-9

  // digit 0
  digitalWrite(seg_A, HIGH);   
  digitalWrite(seg_B, HIGH);  
  digitalWrite(seg_C, HIGH);  
  digitalWrite(seg_D, HIGH);  
  digitalWrite(seg_E, HIGH);  
  digitalWrite(seg_F, HIGH);  
  digitalWrite(seg_G, LOW);

  delay(500);
  
  // digit 1
  digitalWrite(seg_A, LOW);   
  digitalWrite(seg_B, HIGH);  
  digitalWrite(seg_C, HIGH);  
  digitalWrite(seg_D, LOW);  
  digitalWrite(seg_E, LOW);  
  digitalWrite(seg_F, LOW);  
  digitalWrite(seg_G, LOW);

  delay(500);

  // digit 2
  digitalWrite(seg_A, HIGH);   
  digitalWrite(seg_B, HIGH);  
  digitalWrite(seg_C, LOW);  
  digitalWrite(seg_D, HIGH);  
  digitalWrite(seg_E, HIGH);  
  digitalWrite(seg_F, LOW);  
  digitalWrite(seg_G, HIGH);  

  delay(500);

  // digit 3
  digitalWrite(seg_A, HIGH);   
  digitalWrite(seg_B, HIGH);  
  digitalWrite(seg_C, HIGH);  
  digitalWrite(seg_D, HIGH);  
  digitalWrite(seg_E, LOW);  
  digitalWrite(seg_F, LOW);  
  digitalWrite(seg_G, HIGH);  

  delay(500);

  // digit 4
  digitalWrite(seg_A, LOW);   
  digitalWrite(seg_B, HIGH);  
  digitalWrite(seg_C, HIGH);  
  digitalWrite(seg_D, LOW);  
  digitalWrite(seg_E, LOW);  
  digitalWrite(seg_F, HIGH);  
  digitalWrite(seg_G, HIGH);  

  delay(500);

  // digit 5
  digitalWrite(seg_A, HIGH);   
  digitalWrite(seg_B, LOW);  
  digitalWrite(seg_C, HIGH);  
  digitalWrite(seg_D, HIGH);  
  digitalWrite(seg_E, LOW);  
  digitalWrite(seg_F, HIGH);  
  digitalWrite(seg_G, HIGH);  

  delay(500);

  // digit 6
  digitalWrite(seg_A, HIGH);   
  digitalWrite(seg_B, LOW);  
  digitalWrite(seg_C, HIGH);  
  digitalWrite(seg_D, HIGH);  
  digitalWrite(seg_E, HIGH);  
  digitalWrite(seg_F, HIGH);  
  digitalWrite(seg_G, HIGH);  

  delay(500);

  // digit 7
  digitalWrite(seg_A, HIGH);   
  digitalWrite(seg_B, HIGH);  
  digitalWrite(seg_C, HIGH);  
  digitalWrite(seg_D, LOW);  
  digitalWrite(seg_E, LOW);  
  digitalWrite(seg_F, LOW);  
  digitalWrite(seg_G, LOW);  

  delay(500);

  // digit 8
  digitalWrite(seg_A, HIGH);   
  digitalWrite(seg_B, HIGH);  
  digitalWrite(seg_C, HIGH);  
  digitalWrite(seg_D, HIGH);  
  digitalWrite(seg_E, HIGH);  
  digitalWrite(seg_F, HIGH);  
  digitalWrite(seg_G, HIGH);  

  delay(500);

  // digit 9
  digitalWrite(seg_A, HIGH);   
  digitalWrite(seg_B, HIGH);  
  digitalWrite(seg_C, HIGH);  
  digitalWrite(seg_D, HIGH);  
  digitalWrite(seg_E, LOW);  
  digitalWrite(seg_F, HIGH);  
  digitalWrite(seg_G, HIGH);  

  delay(500);




  /* old code for going over all the segments and lighting them one by one
  int x,status;
  
  //Step through all eight EL channels (pins 2 through 9)
  for (x=2; x<=9; x++)
  {
    digitalWrite(x, HIGH);   // turn the EL channel on
    delay(100);              // wait for 1/10 second
    digitalWrite(x, LOW);    // turn the EL channel off

    digitalWrite(10, status);   // blink both status LEDs
    digitalWrite(13, status);
    status = !status; 
  }*/
}
