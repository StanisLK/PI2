# Implementação

Nesta etapa será desenvolvido tudo o que foi previamente apresentado, nas etapas de concepção e design, no final desta etapa o projeto (em questão de desenvolvimento) deverá estar finalizado.

## Testes dos Componentes

Antes de partir para funcionamento de todos os sensores/atuadores em conjunto, é necessário entender o funcionamento de cada um separadamente, então nessa etapa foi elaborado alguns códigos de teste para cada componente que será utilizado no projeto, com o intuito de validar o funcionamento correto dos mesmos e facilitar a integração de todos os componentes no cádigo final. 

Os seguintes códigos de teste foram feitos:

[Teste acionamento de um LED pelo teclado](./testes/Teste_LED_com_teclado.ino)

[Teste funcionamento PIR](./testes/Teste_PIR.ino)

[Teste funcionamento MQ2](./testes/Teste_MQ2.ino)

[Teste acionamento de um servo motor pelo teclado](./testes/Teste_Servo_com_teclado.ino)

No sensor PIR e no MQ2 temos regulagens a serem feitas, para a etapa de teste de funcionamento destes sensores, no PIR, foi girado totalmente no sentido anti horário os potenciômetros de sensibilidade e de tempo. No MQ2 foi ajustado o potenciômetro para quando a sua saída analógica for aproximadamente 300 ou mais, que seja acionada a sua saída digital.

## Integração dos Componentes

Utilizando os códigos de testes anteriores e a experiência adquirida na etapa anterior, foi desenvolvido um código final para o projeto que integrasse todos os componentes que vão ser utilizados, realizando todas as funções necessárias, que foram apresentadas na concepção e design do projeto. Desta forma finalizamos a parte de programação do projeto e temos um projeto elétrico pronto para ser inserido na maquete.

[Codigo Final](./testes/Codigo_Final.ino)


## Construção da Maquete
