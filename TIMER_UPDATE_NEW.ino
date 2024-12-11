#include <avr/wdt.h> // Watchdog timer library

int segA = 2;    
int segB = 3;    
int segC = 4;    
int segD = 5;     
int segE = 6;    
int segF = 7;    
int segG = 8;    

int d1 = 9;   
int d2 = 10;   
int d3 = 11;   
int d4 = 12;  

int GREEN1=30;
int GREEN2=32;
int GREEN3=34;
int GREEN4=36;

int RED1=31;
int RED2=33;
int RED3=35;
int RED4=37;

int SENSOR1=14;
int SENSOR2=15;
int SENSOR3=16;
int SENSOR4=17;

int SENSOR5=18;
int SENSOR6=19;
int SENSOR7=20;
int SENSOR8=21;

int SecondCount = 2650; // change this if seconds dont work right. this worked for me. Its just a simple way to count down seconds without librarys.
int i=0;
int buzzer = 13;
boolean val;

void setup() 
{
  pinMode(SENSOR1, INPUT_PULLUP);
  pinMode(SENSOR2, INPUT_PULLUP);
  pinMode(SENSOR3, INPUT_PULLUP);
  pinMode(SENSOR4, INPUT_PULLUP);
  
  pinMode(SENSOR5, INPUT_PULLUP);
  pinMode(SENSOR6, INPUT_PULLUP);
  pinMode(SENSOR7, INPUT_PULLUP);
  pinMode(SENSOR8, INPUT_PULLUP);
  
     
  pinMode(buzzer,OUTPUT);
  pinMode(buzzer,LOW); //intially buzzer off
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(13, OUTPUT);

  pinMode(GREEN1,OUTPUT); 
  pinMode(GREEN2,OUTPUT);
  pinMode(GREEN3,OUTPUT); 
  pinMode(GREEN4,OUTPUT);
  pinMode(RED1, OUTPUT);
  pinMode(RED2, OUTPUT);
  pinMode(RED3, OUTPUT);
  pinMode(RED4, OUTPUT);

 
    digitalWrite(GREEN1,LOW); 
    digitalWrite(GREEN2,LOW);
    digitalWrite(GREEN3,LOW);
    digitalWrite(GREEN4,LOW);
    digitalWrite(RED1, LOW);
    digitalWrite(RED2, LOW);
    digitalWrite(RED3, LOW);
    digitalWrite(RED4, LOW);
 }

void loop() 
{
if( (digitalRead(SENSOR1)==LOW) &&  (digitalRead(SENSOR5)==HIGH) )
LANE1_Medium();

if( (digitalRead(SENSOR1)==LOW) &&  (digitalRead(SENSOR5)==LOW) )
LANE1_HIGH();

else if( (digitalRead(SENSOR2)==LOW) &&  (digitalRead(SENSOR6)==HIGH) )
LANE2_Medium();

if ( (digitalRead(SENSOR2)==LOW) &&  (digitalRead(SENSOR6)==LOW) )
LANE2_HIGH();

else if( (digitalRead(SENSOR3)==LOW) &&  (digitalRead(SENSOR7)==HIGH) )
LANE3_Medium();

if ( (digitalRead(SENSOR3)==LOW) &&  (digitalRead(SENSOR7)==LOW) )
LANE3_HIGH();

else if( (digitalRead(SENSOR4)==LOW) &&  (digitalRead(SENSOR8)==HIGH) )
LANE4_Medium();

if(  (digitalRead(SENSOR4)==LOW) &&  (digitalRead(SENSOR8)==LOW) )
LANE4_HIGH();

else 
Normal();
}    


void Normal()
{
  // allStart(0);//displays all numbers at the start 0 
    digitalWrite(GREEN1, HIGH); 
    digitalWrite(RED1, LOW);
    digitalWrite(GREEN2, LOW);
    digitalWrite(RED2, HIGH);                     //LANE FIRST
    digitalWrite(GREEN3, LOW); 
    digitalWrite(RED3, HIGH);
    digitalWrite(GREEN4, LOW);
    digitalWrite(RED4, HIGH);
     
      countingdown(0,3,0,0); //    SET COUNTDOWN TIME HERE (0,3,0,0); = 30 seconds
      all(0); // Displays the numbers at the end. You can change it to any number. 0 can be 1 2 3 4 5 6 7 8 9
      beepsound();  
 
    digitalWrite(GREEN1, LOW); 
    digitalWrite(RED1, HIGH);
    digitalWrite(GREEN2, HIGH);
    digitalWrite(RED2, LOW);                //LANE SECOND
    digitalWrite(GREEN3, LOW); 
    digitalWrite(RED3, HIGH);
    digitalWrite(GREEN4, LOW);
    digitalWrite(RED4, HIGH);

     countingdown(0,3,0,0); //    SET COUNTDOWN TIME HERE (0,2,0,0); = 20 seconds
     all(0); // Displays the numbers at the end. You can change it to any number. 0 can be 1 2 3 4 5 6 7 8 9
     beepsound();  

    digitalWrite(GREEN1, LOW); 
    digitalWrite(RED1, HIGH);
    digitalWrite(GREEN2, LOW);
    digitalWrite(RED2, HIGH);
    digitalWrite(GREEN3, HIGH); 
    digitalWrite(RED3, LOW);             //LANE THIRD
    digitalWrite(GREEN4, LOW);
    digitalWrite(RED4, HIGH);

    
     countingdown(0,3,0,0); //    SET COUNTDOWN TIME HERE (0,2,0,0); = 20 seconds
     all(0); // Displays the numbers at the end. You can change it to any number. 0 can be 1 2 3 4 5 6 7 8 9
     beepsound();  

    digitalWrite(GREEN1, LOW); 
    digitalWrite(RED1, HIGH);
    digitalWrite(GREEN2, LOW);
    digitalWrite(RED2, HIGH);
    digitalWrite(GREEN3, LOW);            // LANE FOURTH
    digitalWrite(RED3, HIGH);
    digitalWrite(GREEN4, HIGH);
    digitalWrite(RED4, LOW);

    countingdown(0,3,0,0); //    SET COUNTDOWN TIME HERE (0,2,0,0); = 20 seconds
    all(0); // Displays the numbers at the end. You can change it to any number. 0 can be 1 2 3 4 5 6 7 8 9
    beepsound();   
}

void LANE1_Medium()
{
    digitalWrite(GREEN1, HIGH); 
    digitalWrite(RED1, LOW);
    digitalWrite(GREEN2, LOW);                //LANE FIRST
    digitalWrite(RED2, HIGH);
    digitalWrite(GREEN3, LOW); 
    digitalWrite(RED3, HIGH);
    digitalWrite(GREEN4, LOW);
    digitalWrite(RED4, HIGH);
     
      countingdown(0,6,0,0); //    SET COUNTDOWN TIME HERE (0,2,0,0); = 20 seconds
      all(0); // Displays the numbers at the end. You can change it to any number. 0 can be 1 2 3 4 5 6 7 8 9
      beepsound();    

   }

   void LANE1_HIGH()
{
    digitalWrite(GREEN1, HIGH); 
    digitalWrite(RED1, LOW);
    digitalWrite(GREEN2, LOW);                //LANE FIRST
    digitalWrite(RED2, HIGH);
    digitalWrite(GREEN3, LOW); 
    digitalWrite(RED3, HIGH);
    digitalWrite(GREEN4, LOW);
    digitalWrite(RED4, HIGH);
     
      countingdown(0,9,0,0); //    SET COUNTDOWN TIME HERE (0,2,0,0); = 20 seconds
      all(0); // Displays the numbers at the end. You can change it to any number. 0 can be 1 2 3 4 5 6 7 8 9
      beepsound();    

   }

void LANE2_Medium()
{
    digitalWrite(GREEN1, LOW); 
    digitalWrite(RED1, HIGH);
    digitalWrite(GREEN2, HIGH);
    digitalWrite(RED2, LOW);
    digitalWrite(GREEN3, LOW);      //LANE SECOND
    digitalWrite(RED3, HIGH);
    digitalWrite(GREEN4, LOW);
    digitalWrite(RED4, HIGH);

     countingdown(0,6,0,0); //    SET COUNTDOWN TIME HERE (0,2,0,0); = 20 seconds
     all(0); // Displays the numbers at the end. You can change it to any number. 0 can be 1 2 3 4 5 6 7 8 9
     beepsound(); 
  }

  void LANE2_HIGH()
{
    digitalWrite(GREEN1, LOW); 
    digitalWrite(RED1, HIGH);
    digitalWrite(GREEN2, HIGH);
    digitalWrite(RED2, LOW);
    digitalWrite(GREEN3, LOW);      //LANE SECOND
    digitalWrite(RED3, HIGH);
    digitalWrite(GREEN4, LOW);
    digitalWrite(RED4, HIGH);

     countingdown(0,9,0,0); //    SET COUNTDOWN TIME HERE (0,2,0,0); = 20 seconds
     all(0); // Displays the numbers at the end. You can change it to any number. 0 can be 1 2 3 4 5 6 7 8 9
     beepsound(); 
  }


void LANE3_Medium()
{
    digitalWrite(GREEN1, LOW); 
    digitalWrite(RED1, HIGH);
    digitalWrite(GREEN2, LOW);
    digitalWrite(RED2, HIGH);
    digitalWrite(GREEN3, HIGH);          // LANE THIRD
    digitalWrite(RED3, LOW);
    digitalWrite(GREEN4, LOW);
    digitalWrite(RED4, HIGH);

    
     countingdown(0,6,0,0); //    SET COUNTDOWN TIME HERE (0,2,0,0); = 20 seconds
     all(0); // Displays the numbers at the end. You can change it to any number. 0 can be 1 2 3 4 5 6 7 8 9
     beepsound();  
  }

  void LANE3_HIGH()
{
    digitalWrite(GREEN1, LOW); 
    digitalWrite(RED1, HIGH);
    digitalWrite(GREEN2, LOW);
    digitalWrite(RED2, HIGH);
    digitalWrite(GREEN3, HIGH);          // LANE THIRD
    digitalWrite(RED3, LOW);
    digitalWrite(GREEN4, LOW);
    digitalWrite(RED4, HIGH);

    
     countingdown(0,9,0,0); //    SET COUNTDOWN TIME HERE (0,2,0,0); = 20 seconds
     all(0); // Displays the numbers at the end. You can change it to any number. 0 can be 1 2 3 4 5 6 7 8 9
     beepsound();  

  }

void LANE4_Medium()
{   
    digitalWrite(GREEN1, LOW); 
    digitalWrite(RED1, HIGH);
    digitalWrite(GREEN2, LOW);
    digitalWrite(RED2, HIGH);
    digitalWrite(GREEN3, LOW);       //LANE FOURTH
    digitalWrite(RED3, HIGH);
    digitalWrite(GREEN4, HIGH);
    digitalWrite(RED4, LOW);

    countingdown(0,6,0,0); //    SET COUNTDOWN TIME HERE (0,2,0,0); = 20 seconds
    all(0); // Displays the numbers at the end. You can change it to any number. 0 can be 1 2 3 4 5 6 7 8 9
    beepsound();  

 }

 void LANE4_HIGH()
{   
    digitalWrite(GREEN1, LOW); 
    digitalWrite(RED1, HIGH);
    digitalWrite(GREEN2, LOW);
    digitalWrite(RED2, HIGH);
    digitalWrite(GREEN3, LOW);       //LANE FOURTH
    digitalWrite(RED3, HIGH);
    digitalWrite(GREEN4, HIGH);
    digitalWrite(RED4, LOW);

    countingdown(0,9,0,0); //    SET COUNTDOWN TIME HERE (0,2,0,0); = 20 seconds
    all(0); // Displays the numbers at the end. You can change it to any number. 0 can be 1 2 3 4 5 6 7 8 9
    beepsound();  

 }

void countingdown(int a,int b,int c,int d)
{
  
  while (a != -1) {
    while(b != -1){
      while(c != -1){
        while (d != -1) {
          while (i<10) { // "i" here is like a timer ! Because we can't use a delay function
            selectDwriteL(1,a);
            selectDwriteL(2,b);
            selectDwriteL(3,c);
            selectDwriteL(4,d);
            i++;
          }
          i=0;
          d--;
        }
        d=9;
        c--;
      }
      c=9;
      b--;
    }
    b=9;
    a--;
    }
}

//Select Wich Digit (selectD) is going to Display (writeL)
void selectDwriteL(int d,int l)
{
  switch (d)
  { // choose a digit
    case 0: digitalWrite(d1, HIGH); //case 0 - All ON
            digitalWrite(d2, HIGH);
            digitalWrite(d3, HIGH);
            digitalWrite(d4, HIGH);
            break;
    case 1: digitalWrite(d1, HIGH);//case 1 - Digit Number 1
            digitalWrite(d2, LOW);
            digitalWrite(d3, LOW);
            digitalWrite(d4, LOW);
            break;
    case 2: digitalWrite(d1, LOW);//case 1 - Digit Number 2
            digitalWrite(d2, HIGH);
            digitalWrite(d3, LOW);
            digitalWrite(d4, LOW);
            break;
    case 3: digitalWrite(d1, LOW);//case 1 - Digit Number 3
            digitalWrite(d2, LOW);
            digitalWrite(d3, HIGH);
            digitalWrite(d4, LOW);
            break;
    case 4: digitalWrite(d1, LOW);//case 1 - Digit Number 4
            digitalWrite(d2, LOW);
            digitalWrite(d3, LOW);
            digitalWrite(d4, HIGH);
            break;
  }

  switch (l) { // choose a Number
  
    case 0: zero();
            break;
    case 1: one();
            break;
    case 2: two();
            break;
    case 3: three();
            break;
    case 4: four();
            break;
    case 5: five();
            break;
    case 6: six();
            break;
    case 7: seven();
            break;
    case 8: eight();
            break;
    case 9: nine();
            break;
    case 10: point(); 
            break;
    case 11: none(); 
            break;
            
  }
delayMicroseconds(SecondCount);
}

void all(int n){ // this will display numbers when exploding, you set it at void loop.
  selectDwriteL(0,n); // Displays whatever you set at void loop all(0); 0 can be 1 2 3 4 5 6 7 8 9
}

void allStart(int n){ // Displays whatever you set at void loop allStart(0); 0 can be 1 2 3 4 5 6 7 8 9
  selectDwriteL(0,n);
}

void zero()
{
  digitalWrite(segA, LOW);
  digitalWrite(segB, LOW);
  digitalWrite(segC, LOW);
  digitalWrite(segD, LOW);
  digitalWrite(segE, LOW);
  digitalWrite(segF, LOW);
  digitalWrite(segG, HIGH);
}
void one()
{
  digitalWrite(segA, HIGH);
  digitalWrite(segB, LOW);
  digitalWrite(segC, LOW);
  digitalWrite(segD, HIGH);
  digitalWrite(segE, HIGH);
  digitalWrite(segF, HIGH);
  digitalWrite(segG, HIGH);
  }
void two()
{
  digitalWrite(segA, LOW);
  digitalWrite(segB, LOW);
  digitalWrite(segC, HIGH);
  digitalWrite(segD, LOW);
  digitalWrite(segE, LOW);
  digitalWrite(segF, HIGH);
  digitalWrite(segG, LOW);
}
void three()
{
  digitalWrite(segA, LOW);
  digitalWrite(segB, LOW);
  digitalWrite(segC, LOW);
  digitalWrite(segD, LOW);
  digitalWrite(segE, HIGH);
  digitalWrite(segF, HIGH);
  digitalWrite(segG, LOW);
}
void four()
{
  digitalWrite(segA, HIGH);
  digitalWrite(segB, LOW);
  digitalWrite(segC, LOW);
  digitalWrite(segD, HIGH);
  digitalWrite(segE, HIGH);
  digitalWrite(segF, LOW);
  digitalWrite(segG, LOW);
}
void five()
{
  digitalWrite(segA, LOW);
  digitalWrite(segB, HIGH);
  digitalWrite(segC, LOW);
  digitalWrite(segD, LOW);
  digitalWrite(segE, HIGH);
  digitalWrite(segF, LOW);
  digitalWrite(segG, LOW);
}
void six()
{
  digitalWrite(segA, LOW);
  digitalWrite(segB, HIGH);
  digitalWrite(segC, LOW);
  digitalWrite(segD, LOW);
  digitalWrite(segE, LOW);
  digitalWrite(segF, LOW);
  digitalWrite(segG, LOW);
}
void seven()
{
  digitalWrite(segA, LOW);
  digitalWrite(segB, LOW);
  digitalWrite(segC, LOW);
  digitalWrite(segD, HIGH);
  digitalWrite(segE, HIGH);
  digitalWrite(segF, HIGH);
  digitalWrite(segG, HIGH);
}
void eight()
{
  digitalWrite(segA, LOW);
  digitalWrite(segB, LOW);
  digitalWrite(segC, LOW);
  digitalWrite(segD, LOW);
  digitalWrite(segE, LOW);
  digitalWrite(segF, LOW);
  digitalWrite(segG, LOW);
  }
void nine()
{
  digitalWrite(segA, LOW);
  digitalWrite(segB, LOW);
  digitalWrite(segC, LOW);
  digitalWrite(segD, LOW);
  digitalWrite(segE, HIGH);
  digitalWrite(segF, LOW);
  digitalWrite(segG, LOW);
}
void point()
{
  digitalWrite(segA, HIGH);
  digitalWrite(segB, HIGH);
  digitalWrite(segC, HIGH);
  digitalWrite(segD, HIGH);
  digitalWrite(segE, HIGH);
  digitalWrite(segF, HIGH);
  digitalWrite(segG, HIGH);
 }
void none()
{
  digitalWrite(segA, HIGH);
  digitalWrite(segB, HIGH);
  digitalWrite(segC, HIGH);
  digitalWrite(segD, HIGH);
  digitalWrite(segE, HIGH);
  digitalWrite(segF, HIGH);
  digitalWrite(segG, HIGH);
 }

void beepsound()
{ //Beep 
digitalWrite(buzzer, HIGH);
delay(500);
digitalWrite(buzzer, LOW);
}

