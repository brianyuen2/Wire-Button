int broken = 0;
int start = 0;
unsigned long time = 0;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(9, OUTPUT);
  pinMode(3, INPUT);

}

void loop() {
  if (start == 0) {
    start = 1;
    digitalWrite(9, HIGH);
  }
  time = millis();
  //Serial.println(time);

  // time condition
  if(time % 5000 == 0) {
    broken = 0;
    digitalWrite(9, HIGH);
    Serial.println("5 seconds");
  }

  //Serial.print("Pin3 Input: ");
  //Serial.println(digitalRead(3));
  
  // read pin3 input
  if(digitalRead(3) == 0) {
    broken = 1;
    digitalWrite(9, LOW);
    
  } else {
    broken = 0;
    digitalWrite(9, HIGH);
  }
  
  // not broken
  /**if(broken == 0) {
    //Serial.println(time);
    digitalWrite(9, HIGH);
      // 5 seconds stage
  
  // broken
  } else {
      digitalWrite(9, LOW);
  }**/
  //Serial.println(broken);
  //delay(1000);

}
