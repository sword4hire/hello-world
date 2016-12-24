void setup() {
  // setup comm ports
  Serial.begin(9600);

}

void loop() {
  // one phrase ooutput, two second delay
  Serial.write("hello world/n");
  delay(2000);
  
}
