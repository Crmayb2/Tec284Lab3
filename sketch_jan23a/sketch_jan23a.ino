void setup() {
  pinMode(A6, INPUT);
  pinMode(4, OUTPUT);
  int lightLevel = analogRead(A6);
  Serial.begin(9600);
  Serial.println(lightLevel);
  if(lightLevel < 100){
    digitalWrite (4, HIGH);
  }

  // put your setup code here, to run once:

}

void loop() {
  // put your main code here, to run repeatedly:

}
