/*
 * Control software antrian bank denagn printer thermal pos58
 * by HamdaniIT
 */
void setup() {
 Serial.begin(9600);
}

void loop() {
  int a=analogRead(A0);
  int b=analogRead(A1);
  int c=analogRead(A2);
  if(a<=50){
    Serial.println('A');
  }else if(b<=50){
    Serial.println('B');
  }else if(c<=50){
    Serial.println('C');
  }

  delay(1000);
}
