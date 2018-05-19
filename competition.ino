#define BUTTON_DO   2
#define BUTTON_RE   3
#define BUTTON_MI   4
#define BUTTON_FA   5
#define BUTTON_SOL  6
#define BUTTON_LA   7
#define BUTTON_SI   8

#define R_LED       13
#define G_LED       11

#define BUZZER      9


//Массив с пинами кнопок для работы в цикле
byte buttons[7] = {
                   BUTTON_DO,
                   BUTTON_RE,
                   BUTTON_MI,
                   BUTTON_FA,
                   BUTTON_SOL,
                   BUTTON_LA,
                   BUTTON_SI
                  }; 
//Масив уровней byte levels_array = {DO, Re< FA, SOL.......}

void setup() {
  // put your setup code here, to run once:
  pinMode(R_LED, OUTPUT);
  pinMode(G_LED, OUTPUT);
  
  Serial.begin(9600);
  
  for(byte i = 0; i < 7; i++){
    pinMode(buttons[i], INPUT);
  }
  //level_tet( нота )
  delay(4000);
    tone(9, 200, 5100); //261 - si //
    
  level_test();
  delay(3000);
  level_test2();
  delay(3000);
  level_test3();
  delay(3000);
  level_test4();
  delay(3000);
  level_test5();
  delay(3000);
  level_test6();
  delay(3000);
  level_test7();
  
}

void loop() {
  // put your main code here, to run repeatedly:
 // Serial.println(analogRead(A0));
  //delay(200);
}

void level_test(){
  boolean button_was_pressed = false;
  byte num_of_pressed_button = 100;
  //Звучит нота в соответствии с параметром
 
  while(!button_was_pressed){
    for(byte i = 0; i < 7; i++){
      if (digitalRead(buttons[i])){
        
        delayMicroseconds(100);
        
        if (digitalRead(buttons[i])){
          button_was_pressed = true;
          num_of_pressed_button = i;
          break;
        }
      }
    }
  }
    //Проверка правильности нажатя клавиши
   if (digitalRead(BUTTON_DO)) {
   digitalWrite(G_LED, HIGH); // zelen
   digitalWrite(R_LED, LOW);
   
   }else  {
   digitalWrite(G_LED, LOW);
   digitalWrite(R_LED, HIGH);
   }
 
 
  Serial.print("Pressed button # ");
  Serial.println(num_of_pressed_button);
}







void level_test2(){
  boolean button_was_pressed = false;
  byte num_of_pressed_button = 100;
  //Звучит нота в соответствии с параметром
  digitalWrite(G_LED, LOW); // ПОСЛЕ 4 СЕК ГАСНЕТ
   digitalWrite(R_LED, LOW);
   tone(9, 222, 5100); //261 - si //
  while(!button_was_pressed){
    for(byte i = 0; i < 7; i++){
      if (digitalRead(buttons[i])){
        
        delayMicroseconds(100);
        
        if (digitalRead(buttons[i])){
          button_was_pressed = true;
          num_of_pressed_button = i;
          break;
        }
      }
    }
  }
    //Проверка правильности нажатя клавиши
   if (digitalRead(BUTTON_RE)) {
   digitalWrite(G_LED, HIGH);
   digitalWrite(R_LED, LOW);
   
   }else  {
   digitalWrite(G_LED, LOW);
   digitalWrite(R_LED, HIGH);
   }
 
 
  Serial.print("Pressed button # ");
  Serial.println(num_of_pressed_button);
}

void level_test3(){
  boolean button_was_pressed = false;
  byte num_of_pressed_button = 100;
  //Звучит нота в соответствии с параметром
  digitalWrite(G_LED, LOW); // ПОСЛЕ 4 СЕК ГАСНЕТ
   digitalWrite(R_LED, LOW);
   tone(9, 255, 5100); //261 - si //
  while(!button_was_pressed){
    for(byte i = 0; i < 7; i++){
      if (digitalRead(buttons[i])){
        
        delayMicroseconds(100);
        
        if (digitalRead(buttons[i])){
          button_was_pressed = true;
          num_of_pressed_button = i;
          break;
        }
      }
    }
  }
    //Проверка правильности нажатя клавиши
   if (digitalRead(BUTTON_MI)) {
   digitalWrite(G_LED, HIGH);
   digitalWrite(R_LED, LOW);
   
   }else  {
   digitalWrite(G_LED, LOW);
   digitalWrite(R_LED, HIGH);
   }
 
 
  Serial.print("Pressed button # ");
  Serial.println(num_of_pressed_button);
}
void level_test4(){
  boolean button_was_pressed = false;
  byte num_of_pressed_button = 100;
  //Звучит нота в соответствии с параметром
  digitalWrite(G_LED, LOW); // ПОСЛЕ 4 СЕК ГАСНЕТ
   digitalWrite(R_LED, LOW);
   tone(9, 275, 5100); //261 - si //
  while(!button_was_pressed){
    for(byte i = 0; i < 7; i++){
      if (digitalRead(buttons[i])){
        
        delayMicroseconds(100);
        
        if (digitalRead(buttons[i])){
          button_was_pressed = true;
          num_of_pressed_button = i;
          break;
        }
      }
    }
  }
    //Проверка правильности нажатя клавиши
   if (digitalRead(BUTTON_FA)) {
   digitalWrite(G_LED, HIGH);
   digitalWrite(R_LED, LOW);
   
   }else  {
   digitalWrite(G_LED, LOW);
   digitalWrite(R_LED, HIGH);
   }
 
 
  Serial.print("Pressed button # ");
  Serial.println(num_of_pressed_button);
}
void level_test5(){
  boolean button_was_pressed = false;
  byte num_of_pressed_button = 100;
  //Звучит нота в соответствии с параметром
  digitalWrite(G_LED, LOW); // ПОСЛЕ 4 СЕК ГАСНЕТ
   digitalWrite(R_LED, LOW);
   tone(9, 290, 5100); //261 - si //
  while(!button_was_pressed){
    for(byte i = 0; i < 7; i++){
      if (digitalRead(buttons[i])){
        
        delayMicroseconds(100);
        
        if (digitalRead(buttons[i])){
          button_was_pressed = true;
          num_of_pressed_button = i;
          break;
        }
      }
    }
  }
    //Проверка правильности нажатя клавиши
   if (digitalRead(BUTTON_SOL)) {
   digitalWrite(G_LED, HIGH);
   digitalWrite(R_LED, LOW);
   
   }else  {
   digitalWrite(G_LED, LOW);
   digitalWrite(R_LED, HIGH);
   }
 
 
  Serial.print("Pressed button # ");
  Serial.println(num_of_pressed_button);
}
void level_test6(){
  boolean button_was_pressed = false;
  byte num_of_pressed_button = 100;
  //Звучит нота в соответствии с параметром
  digitalWrite(G_LED, LOW); // ПОСЛЕ 4 СЕК ГАСНЕТ
   digitalWrite(R_LED, LOW);
   tone(9, 310, 5100); //261 - si //
  while(!button_was_pressed){
    for(byte i = 0; i < 7; i++){
      if (digitalRead(buttons[i])){
        
        delayMicroseconds(100);
        
        if (digitalRead(buttons[i])){
          button_was_pressed = true;
          num_of_pressed_button = i;
          break;
        }
      }
    }
  }
    //Проверка правильности нажатя клавиши
   if (digitalRead(BUTTON_LA)) {
   digitalWrite(G_LED, HIGH);
   digitalWrite(R_LED, LOW);
   
   }else  {
   digitalWrite(G_LED, LOW);
   digitalWrite(R_LED, HIGH);
   }
 
 
  Serial.print("Pressed button # ");
  Serial.println(num_of_pressed_button);
}
void level_test7(){
  boolean button_was_pressed = false;
  byte num_of_pressed_button = 100;
  //Звучит нота в соответствии с параметром
  digitalWrite(G_LED, LOW); // ПОСЛЕ 4 СЕК ГАСНЕТ
   digitalWrite(R_LED, LOW);
   tone(9, 355, 5100); //261 - si //
  while(!button_was_pressed){
    for(byte i = 0; i < 7; i++){
      if (digitalRead(buttons[i])){
        
        delayMicroseconds(100);
        
        if (digitalRead(buttons[i])){
          button_was_pressed = true;
          num_of_pressed_button = i;
          break;
        }
      }
    }
  }
    //Проверка правильности нажатя клавиши
   if (digitalRead(BUTTON_SI)) {
   digitalWrite(G_LED, HIGH);
   digitalWrite(R_LED, LOW);
   
   }else  {
   digitalWrite(G_LED, LOW);
   digitalWrite(R_LED, HIGH);
   }
 
 
  Serial.print("Pressed button # ");
  Serial.println(num_of_pressed_button);
}

