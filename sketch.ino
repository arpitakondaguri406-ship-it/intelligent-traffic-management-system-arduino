const int R1 = 2;
const int Y1 = 3;
const int G1 = 4;

const int R2 = 5;
const int Y2 = 6;
const int G2 = 7;

void setup() {
  pinMode(R1, OUTPUT);
  pinMode(Y1, OUTPUT);
  pinMode(G1, OUTPUT);

  pinMode(R2, OUTPUT);
  pinMode(Y2, OUTPUT);
  pinMode(G2, OUTPUT);
}

void loop() {

  // Road 1 Green, Road 2 Red
  digitalWrite(R1, LOW);
  digitalWrite(Y1, LOW);
  digitalWrite(G1, HIGH);

  digitalWrite(R2, HIGH);
  digitalWrite(Y2, LOW);
  digitalWrite(G2, LOW);

  delay(3000);

  // Road 1 Yellow
  digitalWrite(G1, LOW);
  digitalWrite(Y1, HIGH);

  delay(1000);

  // Road 1 Red
  digitalWrite(Y1, LOW);
  digitalWrite(R1, HIGH);

  // Road 2 Green
  digitalWrite(R2, LOW);
  digitalWrite(G2, HIGH);

  delay(3000);

  // Road 2 Yellow
  digitalWrite(G2, LOW);
  digitalWrite(Y2, HIGH);

  delay(1000);

  // Road 2 Red
  digitalWrite(Y2, LOW);
  digitalWrite(R2, HIGH);
}