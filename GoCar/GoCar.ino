const int R_SPD = 3; 
const int R_DIR = 4;
const int L_SPD = 5;
const int L_DIR = 6;


void setup() {

  pinMode(R_SPD, OUTPUT);
  pinMode(R_DIR, OUTPUT);
  pinMode(L_SPD, OUTPUT);
  pinMode(L_DIR, OUTPUT);
  
  
  delay(5000);
 
  analogWrite(L_SPD, 100);
  digitalWrite(L_DIR, HIGH);
  analogWrite(R_SPD, 100);
  digitalWrite(R_DIR, HIGH);

  delay(2000);

  analogWrite(L_SPD, 100);
  digitalWrite(L_DIR, HIGH);
  analogWrite(R_SPD, 100);
  digitalWrite(R_DIR, LOW);

  delay(2000);

  analogWrite(L_SPD, 100);
  digitalWrite(L_DIR, HIGH);
  analogWrite(R_SPD, 100);
  digitalWrite(R_DIR, HIGH);

  delay(2000);
 
  digitalWrite(L_SPD, LOW);
  digitalWrite(L_DIR, LOW);
  digitalWrite(R_SPD, LOW);
  digitalWrite(R_DIR, LOW);  

}


void loop() {  
}

