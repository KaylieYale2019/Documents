

 // We have two whiskers, data type: int
 int leftWhisker = 5 ; 
 int rightWhisker = 7 ; 
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600); 
//Declares that my whisker are inputs
  pinMode(leftWhisker, INPUT);
  pinMode(rightWhisker, INPUT);

}

void loop() {
  // put your main code here, to run repeatedly:

  //This allows my arduino to see the data I want 
  int lwValue = digitalRead(leftWhisker)
  int rwValue = digitalRead(rightWhisker)

  //How do I see the info from above?
  Serial.println("Left: ");
  Serial.print(lwValue);
  Serial.println("Right: ")
  Serial.print(rwValue);
  Serial.print(" "); // Prints an additional space for tidiness

  delay(100); // 100 millisecond delay as to not overwhelm Serial Port
}
