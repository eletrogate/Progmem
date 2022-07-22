    //gravação da variável/constante
const char mensagem[] PROGMEM = " A vida passa muito rápido. E se você não curtir de vez em quando, a vida passa e você nem vê.” – Frase do filme Curtindo a vida adoidado";
   
char mensagem_final;

//comunicação serial
void setup() {
  Serial.begin(9600);

//myChar = pgm_read_word(mensagem);
    
    //leitura da variavel/constante
 for (byte k = 0; k < strlen_P(mensagem); k++) {
    mensagem_final = pgm_read_byte_near(mensagem + k);
    //percorre todo o vetor
    
    Serial.print(mensagem_final);
  }
    
}

void loop() {
}