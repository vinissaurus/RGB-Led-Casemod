#include <IRremote.h>

int Rs= 6;
int Gs= 5;
int Bs= 3;
int R = 9;
int G = 10;
int B = 11;
int RECV_PIN = A0;


IRrecv irrecv(RECV_PIN);

//decode_results results;

char IRcode[6][4]= {
  {'F700FF','F7807F','F740BF','F7C03F'},
  {'F720DF','F7A05F','F7609F','F7E01F'},
  {'F710EF','F7906F','F750AF','F7D02F'},
  {'F730CF','F7B04F','F7708F','F7F00F'},
  {'F708F7','F78877','F748B7','F7C837'},
  {'F728D7','F7A857','F76897','F7E817'}
  };

void setup() {
//irrecv.enableIRIn();
//Serial.begin(9600);
  
 pinMode(Rs,OUTPUT);
 pinMode(Gs,OUTPUT);
 pinMode(Bs,OUTPUT);
 pinMode(R,OUTPUT);
 pinMode(G,OUTPUT);
 pinMode(B,OUTPUT);
 
}

int t=5;
void loop() {
  for(int i=0;i<255;i++){
    analogWrite(R,i);
    analogWrite(Rs,i);
    delay(t);
    }

    digitalWrite(R,LOW);
    digitalWrite(G,LOW);
    digitalWrite(B,LOW);
    digitalWrite(Rs,LOW);
    digitalWrite(Gs,LOW);
    digitalWrite(Bs,LOW);

    for(int i=0;i<255;i++){
    analogWrite(G,i);
    analogWrite(Gs,i);
    delay(t);
    }

        digitalWrite(R,LOW);
    digitalWrite(G,LOW);
    digitalWrite(B,LOW);
      digitalWrite(Rs,LOW);
    digitalWrite(Gs,LOW);
    digitalWrite(Bs,LOW);

    for(int i=0;i<255;i++){
    analogWrite(B,i);
    analogWrite(Bs,i);
    delay(t);
    }

        digitalWrite(R,LOW);
    digitalWrite(G,LOW);
    digitalWrite(B,LOW);
      digitalWrite(Rs,LOW);
    digitalWrite(Gs,LOW);
    digitalWrite(Bs,LOW);
  
//for(int i=0;i<255;i++){
//  analogWrite(Rs,i);
//  delay(t);
//  }
//
//  for(int i=255;i>0;i--){
//  analogWrite(Rs,i);
//  delay(t);
//  }
//
//  for(int i=0;i<255;i++){
//  analogWrite(Gs,i);
//  delay(t);
//  }
//
//  for(int i=255;i>0;i--){
//  analogWrite(Gs,i);
//  delay(t);
//  }
//
//  for(int i=0;i<255;i++){
//  analogWrite(Bs,i);
//  delay(t);
//  }
//
//  for(int i=255;i>0;i--){
//  analogWrite(Bs,i);
//  delay(t);
//  }
//
//  for(int i=0;i<255;i++){
//  analogWrite(Rs,i);
//  analogWrite(Gs,i);
//  analogWrite(Bs,i);
//  delay(t);
//  }
//
//  for(int i=255;i>0;i--){
//  analogWrite(Rs,i);
//  analogWrite(Gs,i);
//  analogWrite(Bs,i);
//  delay(t);
//  }
//  digitalWrite(R,HIGH);

}
