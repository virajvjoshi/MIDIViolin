int softpotPin1 = A1; //analog pin 0
int softpotPin2 = A2; //analog pin 0
int softpotPin3 = A3; //analog pin 0
int softpotPin4 = A4; //analog pin 0

void setup(){
  digitalWrite(softpotPin1, HIGH); //enable pullup resistor
    digitalWrite(softpotPin2, HIGH); //enable pullup resistor
    digitalWrite(softpotPin3, HIGH); //enable pullup resistor
    digitalWrite(softpotPin4, HIGH); //enable pullup resistor

  Serial.begin(9600);
}

void loop(){
//  int softpotReading1 = analogRead(softpotPin1);
//    int softpotReading2 = analogRead(softpotPin2);
//      int softpotReading3 = analogRead(softpotPin3);
//        int softpotReading4 = analogRead(softpotPin4);
//  Serial.println(softpotReading1);
//    Serial.println(softpotReading2);
//      Serial.println(softpotReading3);
//        Serial.println(softpotReading4);
//        delay (100);
//}

  //code for String 1: Lower Sa: E3
  int softpotReading1 = analogRead(softpotPin1); 
   int softpotReading2 = analogRead(softpotPin2); 
 
  if(softpotReading1 < 150) {
    Serial.println("s1");
  }
    else if(151 < softpotReading1 && softpotReading1 < 250) {
    Serial.println("r1-");
  }
    else if(251 < softpotReading1 && softpotReading1 < 375) {
    Serial.println("r1");
  }
    else if(376 < softpotReading1 && softpotReading1 < 500) {
    Serial.println("g1-");
  }
    else if(501 < softpotReading1 && softpotReading1 < 625) {
    Serial.println("g1");
  } 
    else if(626 < softpotReading1 && softpotReading1 < 750) {
    Serial.println("m1");
  }
    else if(751 < softpotReading1 && softpotReading1 < 875) {
    Serial.println("m1+");
  }

  //End of String 1
  
  
  //code for String 2: Lower Pa: B3
  if(softpotReading2 < 150) {
    Serial.println("p1");
  }
    else if(151 < softpotReading2 && softpotReading2 < 250) {
    Serial.println("d1-");
  }
    else if(251 < softpotReading2 && softpotReading2 < 375) {
    Serial.println("d1");
  }
    else if(376 < softpotReading2 && softpotReading2 < 500) {
    Serial.println("n1-");
  }
    else if(501 < softpotReading2 && softpotReading2 < 625) {
    Serial.println("n1");
  } 
    else if(626 < softpotReading2 && softpotReading2 < 850) {
    Serial.println("s2");
  }
  
  //End of String 2
  delay(20);

  //code for String 3: Upper Sa: E4
  int softpotReading3 = analogRead(softpotPin3); 
  if(softpotReading3 < 150) {
    Serial.println("s2");
  }
   else if(151 < softpotReading3 && softpotReading3 < 250) {
    Serial.println("r2-");
  }
    else if(251 < softpotReading3 && softpotReading3 < 375) {
    Serial.println("r2");
  }
    else if(376 < softpotReading3 && softpotReading3 < 500) {
    Serial.println("g2-");
  }
    else if(501 < softpotReading3 && softpotReading3 < 625) {
    Serial.println("g2");
  } 
    else if(626 < softpotReading3 && softpotReading3 < 750) {
    Serial.println("m2");
  }
    else if(751 < softpotReading3 && softpotReading3 < 875) {
    Serial.println("m2+");
  }
  //End of String 3
  
  
  //code for String 4: Upper Pa in E : B4
  int softpotReading4 = analogRead(softpotPin4); 
  if(softpotReading4 < 150) {
    Serial.println("p2");
  }
    else if(151 < softpotReading4 && softpotReading4 < 250) {
    Serial.println("d2-");
  }
    else if(251 < softpotReading4 && softpotReading4 < 375) {
    Serial.println("d2");
  }
    else if(376 < softpotReading4 && softpotReading4 < 500) {
    Serial.println("n2-");
  }
    else if(501 < softpotReading4 && softpotReading4 < 625) {
    Serial.println("n2");
  } 
    else if(626 < softpotReading4 && softpotReading4 < 850) {
    Serial.println("s3");
  }

}
