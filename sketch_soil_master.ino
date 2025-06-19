void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);

}
const int dry = 3500;
const int wet = 1200;
void loop() {
  // put your main code here, to run repeatedly:
  Serial.println(analogRead(A0));
  int percent = map(analogRead(A0), wet, dry, 100, 0);
  Serial.print(percent);
  Serial.println("%");

  delay(1000);

}
