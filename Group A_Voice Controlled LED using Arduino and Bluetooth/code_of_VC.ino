String text;

void setup() {
  Serial.begin(9600);
  pinMode(13, OUTPUT);

}

void loop() {
  while(Serial.available())
  {
    delay(10);
    char c = Serial.read();
    text += c;
  }
if(text.length() > 0)
{
  if(text == "on")
  {
    digitalWrite(13, HIGH);
  }
  if(text == "of")
  {
    digitalWrite(13, LOW);
  }
  text = "";
}
}
