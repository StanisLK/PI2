# Design

Nessa etapa será desenvolvida uma maquete eletrônica, de acordo com as funções prometidas na etapa da concepção. 
A maquete eletrônica ira mostrar as ligações de todos os componentes selecionados ao Arduino Mega 2560. 

Tambem será apresentada uma lista de componentes utilizados, e uma breve explicação sobre o funcionamento dos componentes.
## Maquete Eletrônica
![](./imagens/desing%20stanis.jpg)
## Tabela

| Componente | Quantidade |   
| ----------------------| ---------- |
|Arduino Mega 2560| 1
| Sensor de Fumaça MQ2	 |  1
| Micro Servo SG92| 1
| Sensor de Movimento PIR | 1
| LED 	 |  12
| Resistor 330 Ohm	| 12

#### Arduino Mega 2560:
Utilizado para realizar controle de todos atuadores, receber os sinais dos sensores e oferecer alimentações positivas e negativas aos componentes. É o componente principal do projeto.

#### Sensor de Fumaça MQ2:
Utilizado para detectar um possivel vazamento de gás na cozinha (e informar para o arduino), possui uma saída digital e outra analógica.

#### Micro Servo SG92:
Vai ser controlado pelo Arduino por uma modulação de largura de pulso (PWM) para fazer o acionamento do portão de garagem da casa.

#### Sensor de Movimento PIR:
Detecta a presença de algum movimento na entrada de para realizar um acionamento automático das luzes externas, e também informa o arduino sobre o movimento.

#### LED:
Utilizado para fazer a iluminação da casa, que pode ser controlada remotamente (através do computador).

#### Resistor 330 Ohm:
Tem a função de limitar a corrente máxima fornecida pelos terminais de controle dos LEDs, para que não ocorra uma possivel queima do arduino e/ou do LED.
