#define NOTE_C 262
#define NOTE_D 294
#define NOTE_E 330
#define NOTE_F 349
#define NOTE_G 392
#define NOTE_A 440
#define NOTE_B 493
#define NOTE_B0  31
#define NOTE_C1  33
#define NOTE_CS1 35
#define NOTE_D1  37
#define NOTE_DS1 39
#define NOTE_E1  41
#define NOTE_F1  44
#define NOTE_FS1 46
#define NOTE_G1  49
#define NOTE_GS1 52
#define NOTE_A1  55
#define NOTE_AS1 58
#define NOTE_B1  62
#define NOTE_C2  65
#define NOTE_CS2 69
#define NOTE_D2  73
#define NOTE_DS2 78
#define NOTE_E2  82
#define NOTE_F2  87
#define NOTE_FS2 93
#define NOTE_G2  98
#define NOTE_GS2 104
#define NOTE_A2  110
#define NOTE_AS2 117
#define NOTE_B2  123
#define NOTE_C3  131
#define NOTE_CS3 139
#define NOTE_D3  147
#define NOTE_DS3 156
#define NOTE_E3  165
#define NOTE_F3  175
#define NOTE_FS3 185
#define NOTE_G3  196
#define NOTE_GS3 208
#define NOTE_A3  220
#define NOTE_AS3 233
#define NOTE_B3  247
#define NOTE_C4  262
#define NOTE_CS4 277
#define NOTE_D4  294
#define NOTE_DS4 311
#define NOTE_E4  330
#define NOTE_F4  349
#define NOTE_FS4 370
#define NOTE_G4  392
#define NOTE_GS4 415
#define NOTE_A4  440
#define NOTE_AS4 466
#define NOTE_B4  494
#define NOTE_C5  523
#define NOTE_CS5 554
#define NOTE_D5  587
#define NOTE_DS5 622
#define NOTE_E5  659
#define NOTE_F5  698
#define NOTE_FS5 740
#define NOTE_G5  784
#define NOTE_GS5 831
#define NOTE_A5  880
#define NOTE_AS5 932
#define NOTE_B5  988
#define NOTE_C6  1047
#define NOTE_CS6 1109
#define NOTE_D6  1175
#define NOTE_DS6 1245
#define NOTE_E6  1319
#define NOTE_F6  1397
#define NOTE_FS6 1480
#define NOTE_G6  1568
#define NOTE_GS6 1661
#define NOTE_A6  1760
#define NOTE_AS6 1865
#define NOTE_B6  1976
#define NOTE_C7  2093
#define NOTE_CS7 2217
#define NOTE_D7  2349
#define NOTE_DS7 2489
#define NOTE_E7  2637
#define NOTE_F7  2794
#define NOTE_FS7 2960
#define NOTE_G7  3136
#define NOTE_GS7 3322
#define NOTE_A7  3520
#define NOTE_AS7 3729
#define NOTE_B7  3951
#define NOTE_C8  4186
#define NOTE_CS8 4435
#define NOTE_D8  4699
#define NOTE_DS8 4978

int led1=5;
int led2=6;
int led3=7;
int delay1;
int pauseBetweenNotes = 0;
int t;
void setup() {
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);  
  pinMode(8, OUTPUT); 
  pinMode(13, OUTPUT);
  t=640;

     
}

void loop() {

   notars(t, NOTE_D5);
     notars(t, NOTE_CS5);
     digitalWrite(led1, HIGH); 
     digitalWrite(led3, HIGH);
     digitalWrite(led2, LOW);
     notars(t/2, NOTE_B4);
     notars(t/4, NOTE_FS4);
     digitalWrite(led1, LOW); 
     digitalWrite(led3, LOW);
     digitalWrite(led2, HIGH);
     delay(t/4); 
     digitalWrite(led3, HIGH);
     digitalWrite(led1, HIGH);
     digitalWrite(led2, LOW);
     notars(t/4, NOTE_FS4);
     notars(t/4, NOTE_FS4);
     digitalWrite(led1, LOW);
     digitalWrite(led2, LOW);
     digitalWrite(led3, HIGH);
     notars(t/4, NOTE_FS4);
     notars(t/4, NOTE_FS4);
     digitalWrite(led1, HIGH);  
     digitalWrite(led2, HIGH);
     digitalWrite(led3, LOW);
     notars(t/4, NOTE_FS4);
     notars(t/4, NOTE_B4);
     notars(t/4, NOTE_B4);
     digitalWrite(led1, LOW);
     digitalWrite(led2, LOW);
     digitalWrite(led3, HIGH); 
     notars(t/4, NOTE_B4);
     digitalWrite(led1, HIGH);
     digitalWrite(led2, HIGH);
     digitalWrite(led3, LOW);  
     notars(t/2, NOTE_B4);
     digitalWrite(led1, LOW);
     digitalWrite(led2, LOW);
     digitalWrite(led3, HIGH);   
     notars(t/4, NOTE_A4);    
     notars(t/4, NOTE_B4);
     digitalWrite(led1, HIGH);
     digitalWrite(led2, HIGH);
     digitalWrite(led3, LOW); 
     delay(t/4);
     delay(t/4); 
     notars(t/4, NOTE_G4);
     digitalWrite(led1, LOW);
     digitalWrite(led2, LOW);
     digitalWrite(led3, HIGH); 
     delay(t/4);
     digitalWrite(led1, HIGH);
     digitalWrite(led2, HIGH);
     digitalWrite(led3, HIGH); 
     notars(t/4, NOTE_G4);  
     notars(t/4, NOTE_G4);
     digitalWrite(led1, LOW);
     digitalWrite(led2, LOW);
     digitalWrite(led3, HIGH);  
     notars(t/4, NOTE_G4);  
     notars(t/4, NOTE_G4);
     digitalWrite(led2, HIGH);
     digitalWrite(led1, LOW);
     digitalWrite(led3, LOW);   
     notars(t/4, NOTE_G4);  
     notars(t/4, NOTE_B4);  
     notars(t/4, NOTE_B4);
     digitalWrite(led1, LOW);
     digitalWrite(led2, LOW);
     digitalWrite(led3, HIGH); 
     notars(t/4, NOTE_B4);
     digitalWrite(led1, HIGH);
     digitalWrite(led2, HIGH);
     digitalWrite(led3, LOW); 
     notars(t/2, NOTE_B4);
     digitalWrite(led1, LOW);
     digitalWrite(led2, LOW);
     digitalWrite(led3, HIGH);
     notars(t/4, NOTE_CS5);
     notars(t/4, NOTE_D5);
     digitalWrite(led1, HIGH);
     digitalWrite(led3, HIGH);
     digitalWrite(led2, LOW); 
     delay(t/4);
     delay(t/4);
     notars(t/4, NOTE_A4);
     digitalWrite(led1, LOW);
     digitalWrite(led3, LOW);
     digitalWrite(led2, HIGH);//  (2)      
     delay(t/4)
     ;digitalWrite(led1, HIGH);
     digitalWrite(led3, HIGH);
     digitalWrite(led2, LOW); 
     notars(t/4, NOTE_A4);     
     notars(t/4, NOTE_A4);
     digitalWrite(led1, LOW);
     digitalWrite(led3, LOW);
     digitalWrite(led2, HIGH);           
     notars(t/4, NOTE_A4);               
     notars(t/4, NOTE_A4);
     digitalWrite(led1, HIGH);
     digitalWrite(led2, HIGH);
     digitalWrite(led3, LOW);              
     notars(t/4, NOTE_D5);          
     notars(t/4, NOTE_CS5);               
     notars(t/4, NOTE_D5);
     digitalWrite(led1, LOW);
     digitalWrite(led2, LOW);
     digitalWrite(led3, HIGH);           
     notars(t/4, NOTE_CS5);
     digitalWrite(led1, HIGH);
     digitalWrite(led2, HIGH);
     digitalWrite(led3, LOW);          
     notars(t/2, NOTE_D5);
     digitalWrite(led1, LOW);
     digitalWrite(led2, LOW);
     digitalWrite(led3, HIGH);              
     notars(t/4, NOTE_E5);
     notars_jai(t/2, NOTE_E5,t/4);  
     tone(13,NOTE_CS5 ,t*3/4);
      delay(t/4);
     delay(t/4);    
     digitalWrite(led1, LOW);
     digitalWrite(led2, LOW);
     digitalWrite(led3, HIGH);                     
     delay(t/4);
     digitalWrite(led1, HIGH);
     digitalWrite(led2, HIGH);
     digitalWrite(led3, LOW);                    
     noTone(13);
     delay(t/4);
     delay(t/4);
     digitalWrite(led1, LOW); 
     digitalWrite(led2, LOW);
     digitalWrite(led3, HIGH);
     delay(t/4);
     delay(t/4);  
}
void notars(int delay1,int note ){
      tone(13,note ,delay1*0.9);
      pauseBetweenNotes = delay1 * 1.1;
      delay(pauseBetweenNotes);
      noTone(13);  
}
void notars_jai(int delay1,int note ,int Desfase){
       tone(3,note ,delay1*0.9);
       pauseBetweenNotes = delay1 * 1.1;
       delay(Desfase);
       digitalWrite(led1, HIGH);
       digitalWrite(led2, HIGH);
       digitalWrite(led3, HIGH);//  (1)   
       delay(pauseBetweenNotes-Desfase);
       noTone(3);  
}


     
