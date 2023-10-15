#include <LiquidCrystal.h>

int thumb;
int index_finger;
int middle_finger;
int ring_finger;
int little_finger;

const int IN1 = 6, IN2 = 13, IN3 = 8, IN4 = 10;
const int enable12 = 7 , enable34 = 9;

LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

void setup() { 
  /* MOTOR */
  pinMode(IN1, OUTPUT);
  pinMode(IN2, OUTPUT);
  pinMode(IN3, OUTPUT);
  pinMode(IN4, OUTPUT);
  pinMode(enable12, OUTPUT);
  pinMode(enable34, OUTPUT);
  digitalWrite(enable12, HIGH);
  digitalWrite(enable34, HIGH);
  /*  LCD  */
  pinMode(A0, INPUT);
  pinMode(A1, INPUT);
  pinMode(A2, INPUT);
  pinMode(A3, INPUT);
  pinMode(A4, INPUT);
  Serial.begin(9600);
  lcd.begin(16, 2); 
}

void loop() {
  
int thumb = analogRead(A0);
int index_finger = analogRead(A1);
int middle_finger = analogRead(A2);
int ring_finger = analogRead(A3);
int little_finger = analogRead(A4);
  
Serial.print("thumb = ");
Serial.println(thumb);
Serial.print("\n");
Serial.print("index_finger = ");
Serial.println(index_finger);
Serial.print("\n");
Serial.print("middle_finger = ");
Serial.println(middle_finger);
Serial.print("\n");  
Serial.print("ring_finger = ");
Serial.println(ring_finger);
Serial.print("\n");
Serial.print("little_finger = ");
Serial.println(little_finger);
Serial.print("\n");

/* LCD */
if(thumb>1007 && thumb==1009 && thumb<1010){
  lcd.clear();
  lcd.setCursor(1,0);
  lcd.print("Thank You");
  delay(1000); 
  } 
else if(thumb>1015 && thumb==1017){
  lcd.clear();
  lcd.setCursor(1,0);
  lcd.print("Welcome");
  delay(1000); 
  }
/*index_finger*/
else if(index_finger>1007 && index_finger==1009 && index_finger<1010){
  lcd.clear();
  lcd.setCursor(1,0);
  lcd.print("I'm Starving");
  delay(1000); 
  }
else if(index_finger>1015 && index_finger==1017){
 lcd.clear();
 lcd.setCursor(1,0);
 lcd.print("May I have"); 
 lcd.setCursor(4,1);
 lcd.print("some food");
 delay(1000);
  }
/*middle_finger */
else if(middle_finger>1007 && middle_finger==1009 && middle_finger<1010){
  lcd.clear();
  lcd.setCursor(1,0);
  lcd.print("I need medicine");
  delay(1000); 
  }
else if(middle_finger>1015 && middle_finger==1017){
 lcd.clear();
 lcd.setCursor(1,0);
 lcd.print("I want to"); 
 lcd.setCursor(4,1);
 lcd.print("go out");
 delay(1000);
  }
  
/*ring_finger finger */
else if(ring_finger>1007 && ring_finger==1009 && ring_finger<1010){
  lcd.clear();
  lcd.setCursor(1,0);
  lcd.print("I need Water");
  delay(1000); 
  }
else if(ring_finger>1015 && ring_finger==1017){
 lcd.clear();
 lcd.setCursor(1,0);
 lcd.print("I need to use");
}
  delay(1000);
}