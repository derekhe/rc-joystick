void setup() {

  pinMode(5, INPUT);
  pinMode(6, INPUT);
  pinMode(2, INPUT);

  Serial.begin(230400);
}

void loop() {
  unsigned int ch1 = pulseIn(5, HIGH, 50000);
  unsigned int ch2 = pulseIn(6, HIGH, 50000);
  unsigned int ch3 = pulseIn(2, HIGH, 50000);
  
  Serial.print(ch1,HEX);
  Serial.print(ch2,HEX);
  Serial.print(ch3,HEX);
  Serial.print('\n');
}
