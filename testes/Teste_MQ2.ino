#define LED_1 49 //define o pino de controle do LED como 49
#define MQD 51 //define o pino de entrada do pir como 22
#define MQA A15 //define o pino de entrada do pir como 22


int estado_LED1 = LOW; //Variavel que informa o estado do LED


void setup() {
  /* Comunicação serial com o computador */
  Serial.begin(9600);
  while (!Serial);
  /* Configuração dos pinos como entrada ou saída */
  pinMode(LED_1, OUTPUT);
  pinMode(MQD, INPUT);  
  pinMode(MQA, INPUT);
}

void tarefa_1(){
  
  int gas= digitalRead(MQD);
  int analog= analogRead(MQA);
  /* Lógica para fazer o LED acender caso detectado gas*/
  if (gas == LOW)
      estado_LED1 = HIGH;
  else
      estado_LED1 = LOW;
  
     
   digitalWrite(LED_1, estado_LED1);
   Serial.println(analog);
   delay(200);
}

void loop() {
  // put your main code here, to run repeatedly:
  tarefa_1();
}
