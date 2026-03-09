
const int VERDE_MS = 5000;
const int AMARILLO_MS = 2000;

void setup() {
  for (int i = 2; i <= 13; i++) pinMode(i, OUTPUT);
}


void activarPines(int p1, int p2, int p3 = -1, int p4 = -1, int p5 = -1) {
  apagarTodo();
  if (p1 != -1) digitalWrite(p1, HIGH);
  if (p2 != -1) digitalWrite(p2, HIGH);
  if (p3 != -1) digitalWrite(p3, HIGH);
  if (p4 != -1) digitalWrite(p4, HIGH);
  if (p5 != -1) digitalWrite(p5, HIGH);
}

void apagarTodo() {
  for (int i = 2; i <= 13; i++) digitalWrite(i, LOW);
}

void loop() {
  
  activarPines(11, 9, 6, 5, 2);
  delay(VERDE_MS);
  
  activarPines(12, 9, 5);
  delay(AMARILLO_MS);

 
  activarPines(13, 10, 7, 5, 2);
  delay(VERDE_MS);

  activarPines(13, 8, 5);
  delay(AMARILLO_MS);

  activarPines(13, 10, 9, 6, 3);
  delay(VERDE_MS);

  activarPines(13, 9, 4);
  delay(AMARILLO_MS);
}