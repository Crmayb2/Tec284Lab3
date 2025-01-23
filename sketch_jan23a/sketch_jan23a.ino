void setup() {
  pinMode(A6, INPUT);
  int lightLevel = analogRead(A6);
  Serial.begin(9600);
  Serial.println(lightLevel);
  if(lightLevel < 100) {
    Serial.println("It's really dark");
  }
  if(lightLevel < 200) {
    Serial.println("It's dim in here");
  }
  if(lightLevel < 700) {
    Serial.println("It's a little bright");
  }
  if(lightLevel < 1024) {
    Serial.println("It's really bright!");
  } 

  // put your setup code here, to run once:

}

void loop() {
  // put your main code here, to run repeatedly:

}
