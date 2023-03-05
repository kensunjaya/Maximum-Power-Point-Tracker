int readings_a0[150];
int readings_a1[150];

void setup() {
  Serial.begin(9600);
  pinMode(2, OUTPUT);
}

void loop() {
  digitalWrite(2, HIGH);
  delay(50);
  for (int i=0;i<150;i++) {
    readings_a0[i] = analogRead(A0);
    readings_a1[i] = analogRead(A1);

    delay(20);
  }
  digitalWrite(2, LOW);
  Serial.println();
  Serial.println(F("A0 readings :"));
  for (int i=0;i<150;i++) {
    Serial.print(readings_a0[i]);
    Serial.print(F(", "));
    
  }
  Serial.println();
  Serial.println(F("A1 readings :"));
  for (int i=0;i<150;i++) {
    Serial.print(readings_a1[i]);
    Serial.print(F(", "));
    
  }
  Serial.println();
  delay(5000);
  
}
