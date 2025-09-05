
void setup() {
  Serial.begin(9600);

  pinMode(9, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(10, OUTPUT);
}

void loop() {
  for (int r = 0; r <= 255; r +=20){
       analogWrite(9, r);
    for (int g = 0; g <= 255; g+=20) {
         analogWrite(11, g);
      for (int b = 0; b <= 255; b+=20){
        analogWrite(10, b);
      }
    }
  }
}
