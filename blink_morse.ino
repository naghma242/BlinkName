String n = "NAGHMA";
char c;
// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(LED_BUILTIN, OUTPUT);
}
void dash()
{
  digitalWrite(LED_BUILTIN, HIGH);
  delay(900);
  digitalWrite(LED_BUILTIN, LOW);
  delay(300);
}
void dot()
{
  digitalWrite(LED_BUILTIN, HIGH);
  delay(300);
  digitalWrite(LED_BUILTIN, LOW);
  delay(300);
}
void morsePrint()
{ 
  if (c = 'A')
  {
    dot();
    dash();
    delay(900);
  }
  if (c = 'B')
  {
    dash();
    dot();
    dot();
    dot();
    delay(900);
  }
  if (c = 'C')
  {
    dash();
    dot();
    dash();
    dot();
    delay(900);
  }
  if (c = 'D')
  {
    dash();
    dot();
    dot();
    delay(900);
  }
  if (c = 'E')
  {
    dot();
    delay(900);
  }
  if (c = 'F')
  {
    dot();
    dot();
    dash();
    dot();
    delay(900);
  }
  if (c = 'G')
  {
    dash();
    dash();
    dot();
    delay(900);
  }
  if (c = 'H')
  {
    dot();
    dot();
    dot();
    dot();
    delay(900);
  }
  if (c = 'I')
  {
    dot();
    dot();
    delay(900);
  }
  if (c = 'J')
  {
    dot();
    dash();
    dash();
    dash();
    delay(900);
  }
  if (c = 'K')
  {
    dash();
    dot();
    dash();
    delay(900);
  }
  if (c = 'L')
  {
    dot();
    dash();
    dot();
    dot();
    delay(900);
  }
  if (c = 'M')
  {
    dash();
    dash();
    delay(900);
  }
  if (c = 'N')
  {
    dash();
    dot();
    delay(900);
  }
  if (c = 'O')
  {
    dash();
    dash();
    dash();
    delay(900);
  }
  if (c = 'P')
  {
    dot();
    dash();
    dash();
    dot();
    delay(900);
  }
  if (c = 'Q')
  {
    dash();
    dash();
    dot();
    dash();
    delay(900);
  }
  if (c = 'R')
  {
    dot();
    dash();
    dot();
    delay(900);
  }
  if (c = 'S')
  {
    dot();
    dot();
    dot();
    delay(900);
  }
  if (c = 'T')
  {
    dash();
    delay(900);
  }
  if (c = 'U')
  {
    dot();
    dot();
    dash();
    delay(900);
  }
  if (c = 'V')
  {
    dot();
    dot();
    dot();
    dash();
    delay(900);
  }
  if (c = 'W')
  {
    dot();
    dash();
    dash();
    delay(900);
  }
  if (c = 'X')
  {
    dash();
    dot();
    dot();
    dash();
    delay(900);
  }
  if (c = 'Y')
  {
    dash();
    dot();
    dash();
    dash();
    delay(900);
  }
  if (c = 'Z')
  {
    dash();
    dash();
    dot();
    dot();
    delay(900);
  }
  else
  {
    Serial.println("Please give a valid entry");
  }
}
// the loop function runs over and over again forever
void loop()
{
  /*while (n == NULL && Serial.available() == 0)
  {
    Serial.println("Please enter your name");
    n = Serial.readString();
    delay(5000);
  }
  //n = Serial.read();*/
  for (int i = 0; i < n.length(); i++)
  {
    n.toUpperCase();
    c = n.charAt(i);
    Serial.println(c);
    morsePrint();
  }
}
