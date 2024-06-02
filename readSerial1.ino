void setup() {
  // เปิด Serial communication
//  Serial2.begin(9600);
  pinMode(LED_BUILTIN, OUTPUT);
  Serial.begin(9600);
  Serial2.begin(9600);
//  delay(2000);
  
    Serial.println("kuy");
}

void loop() {
  if(Serial2.available() >= 2)
  {
//    Serial.println("kuy");
    uint16_t data = 0;
    data = Serial2.read();
    data |= Serial2.read() << 8;
    Serial.println(data);
    digitalWrite(LED_BUILTIN,HIGH);
//  delay(1000);
//  digitalWrite(LED_BUILTIN,LOW);
//  delay(1000);
  }
//  else{
//    Serial.println("Not recieve");
//    digitalWrite(LED_BUILTIN,LOW);
//  }
  
}
