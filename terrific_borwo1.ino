// C++ code
//
void setup()
{
  Serial.begin(9600);
  pinMode(7, INPUT);
}

void loop()
{

  int a=digitalRead(7);
  Serial.println(a);
}