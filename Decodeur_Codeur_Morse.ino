String dictionnary[] = {".-", "-...", "-.-.", "-..", ".", "..-.", "--.", "....", "..", ".---", "-.-", ".-..", "--", "-.", "---", ".--.", "--.-", ".-.", "...", "-", "..-", "...-", ".--", "-..-", "-.--", "--.."};
char alphabet[27] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
String morse = ".-";
String translation = "";
String message = "";

void setup() {
  // put your setup code here, to run once:

}

void loop() {
  Serial.begin(9600);
  translation += decodage(morse);
  delay(1000);
  Serial.println(translation);

}

char decodage(String word) {
  for(int i = 0; i < 27; i++)
  {
    if (dictionnary[i] == word) {
      return alphabet[i];
    }
    
    if (alphabet[i] == word) {
      return dictionnary[i];
    }
  }
}


Serial.println("Quel message voulez-vous coder ?");
message = Serial.read();
message.length();
