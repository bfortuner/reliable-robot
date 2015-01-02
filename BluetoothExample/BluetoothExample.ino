void setup()
{
    Serial.begin(9600);
    pinMode(13, OUTPUT);
}

void loop()
{
  //Serial.print("Starting: ");
  //delay(1000);
    if (Serial.available()) {
        char ch = Serial.read();
        Serial.print("Received: ");
        Serial.println(ch);
        if (ch == 'a') {
            digitalWrite(13, HIGH);
        }
        else {
            digitalWrite(13, LOW);
        }
    }
}
