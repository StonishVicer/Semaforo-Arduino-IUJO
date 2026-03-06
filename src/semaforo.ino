//1. Commit by Samul Peña
void setup()
{
  pinMode(13, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(2, OUTPUT);
}

void apagarTodo()
{
  digitalWrite(13, LOW); digitalWrite(12, LOW); digitalWrite(11, LOW); digitalWrite(10, LOW);
  digitalWrite(9, LOW);  digitalWrite(8, LOW);  digitalWrite(7, LOW);  digitalWrite(6, LOW);
  digitalWrite(5, LOW);  digitalWrite(4, LOW);  digitalWrite(3, LOW);  digitalWrite(2, LOW);
}

void loop() {
  apagarTodo();
  digitalWrite(11, HIGH);
  digitalWrite(9, HIGH);
  digitalWrite(6, HIGH);
  digitalWrite(5, HIGH);
  digitalWrite(2, HIGH);
  delay(5000);

  apagarTodo();
  digitalWrite(12, HIGH);
  digitalWrite(9, HIGH);
  digitalWrite(5, HIGH);
  delay(2000);

  //turno 2 saraaa :)
  apagarTodo();
  digitalWrite(13, HIGH);
  digitalWrite(10, HIGH);
  digitalWrite(7, HIGH);
  digitalWrite(5, HIGH);
  digitalWrite(2, HIGH);
  delay(5000);

  apagarTodo();
  digitalWrite(13, HIGH);
  digitalWrite(8, HIGH);
  digitalWrite(5, HIGH);
  delay(2000);

    // Turno 3 paola
  apagarTodo();
  digitalWrite(13, HIGH);
  digitalWrite(10, HIGH);
  digitalWrite(9, HIGH);
  digitalWrite(6, HIGH);
  digitalWrite(3, HIGH);
  delay(5000);

  apagarTodo();
  digitalWrite(13, HIGH);
  digitalWrite(9, HIGH);
  digitalWrite(4, HIGH);
  delay(2000);
}