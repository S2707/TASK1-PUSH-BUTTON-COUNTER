// C++ code
//
const int pb=2;
const int led=8;
int counter;

void setup()
{
 pinMode(2, INPUT);
  pinMode(8, OUTPUT);
  counter=0;
}

void loop()
{
  Serial.begin(9600);
  int Bstate=digitalRead(pb);
  if(Bstate==1){
  digitalWrite(led, HIGH);
  delay(1000);// Wait for 1000 millisecond
    counter=counter+1;
    Serial.println(counter);
  }
  else{
    
  digitalWrite(led, LOW);
  delay(1000); // Wait for 1000 millisecond(s)
}
}