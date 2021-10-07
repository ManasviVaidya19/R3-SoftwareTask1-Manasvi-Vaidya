/* 
By Manasvi Vaidya
10/6/2021
Software Task 1
*/

 
// Remix of 7 Segment Display + BCD Decoder by Md. Jahid Hasan

// pins being used for the 7 segment displays
int pin[4] = {0, 1, 2, 3};   // A, B, C, D
int pin2[4]= {4, 5, 6, 7};   // A, B, C, D

// Array for numbers 1-9
int num[10][4] = 
{
  	  
      //{A, B, C, D},
      {0, 0, 0, 0},  
      {1, 0, 0, 0},
      {0, 1, 0, 0},
      {1, 1, 0, 0},
      {0, 0, 1, 0},

      {1, 0, 1, 0}, 
      {0, 1, 1, 0},
      {1, 1, 1, 0},
      {0, 0,0 , 1},
      {1, 0, 0, 1}, 
  
  
};

void setup()
{
  // initalizes all pins needed to be outputs 
  for(int i=0; i<8; i++){
    pinMode(pin[i], OUTPUT);
  }
}

void loop()
{ // for loop will run through ones first and then tens after passing 9
  for(int x=0; x<10; x++) // counter for tens
  {
    for(int i=0; i<10; i++) // counter for ones
    {
      for(int j=0; j<4; j++){ // appropriate digit selected 
        digitalWrite(pin[j], num[i][j]);
      }
      for(int y=0; y<4; y++){ // appropriate digit selected
        digitalWrite(pin2[y], num[x][y]);
      }
      delay(250);
    }
  }
}





