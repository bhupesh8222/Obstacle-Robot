const int IR =8;
void setup() {
  Serial.begin(9600);
  pinMode(IR, INPUT);

}

void loop() {
      Serial.println("READING");
      Serial.println(digitalRead (IR));

}
