# racao-sonora
Código em Arduino para o projeto da disciplina de Sistemas Digitais

Aqui você vai encontrar a lista de componentes e o passo a passo para criar o seu próprio artefato!

# Passo a Passo: Montando o seu Projeto "Ração Sonora"

Este guia detalha a montagem física dos componentes na protoboard e na sua placa Arduino (BlackBoard ou compatível com Uno).

*Tempo Estimado:* 30-60 minutos (dependendo da sua familiaridade com eletrônica).


## 1. O que você vai precisar (Lista de Componentes):

1 Placa Arduino Uno - Blackboard/Robocore
1 Sensor Ultrassônico He-5R04
1 Buzzer Passivo
1 Protoboard
1 Resistor de 220 ahms
1 LED amarela
6 fios jumpers Male-to -Female
4 fios jumpers Male-to- Male
1 molde 3d(opcional)

## 2. Entendendo a Protoboard:

Antes de começar, observe sua protoboard:

* *Linhas Horizontais (Barramentos de Alimentação):* As linhas ao longo das bordas (marcadas com '+' e '-' ou cores vermelha/azul) são conectadas horizontalmente. Use-as para distribuir 5V e GND.
* *Colunas Verticais (Área de Componentes):* As colunas no centro da protoboard são conectadas verticalmente em grupos de 5 furos. Os componentes e jumpers são conectados aqui.

---

## 3. Passo a Passo da Montagem (Conecte um por um):

Siga a ordem para facilitar a organização.

### Passo 3.1: Conectando a Alimentação na Protoboard

Vamos levar energia do Arduino para a protoboard para alimentar os outros componentes.

1.  Pegue um *fio jumper Macho-Macho*.
2.  Conecte uma ponta ao pino *5V* da sua *BlackBoard*.
3.  Conecte a outra ponta em *qualquer furo da linha horizontal marcada com '+' (ou vermelha)* na protoboard.
4.  Pegue outro *fio jumper Macho-Macho*.
5.  Conecte uma ponta ao pino *GND* da sua *BlackBoard*.
6.  Conecte a outra ponta em *qualquer furo da linha horizontal marcada com '-' (ou azul)* na protoboard.

* *Verificação:* Agora, toda a linha '+' da protoboard tem 5V, e toda a linha '-' tem GND.

### Passo 3.2: Conectando o Sensor Ultrassônico HC-SR04

O sensor terá 4 pinos: VCC, Trig, Echo, GND.

1.  Pegue seu *sensor HC-SR04*.
2.  *VCC:* Conecte o pino *VCC* do sensor a *qualquer furo na linha '+' (5V)* da sua protoboard (ou diretamente ao pino 5V do Arduino, se preferir). Use um jumper Macho-Fêmea se o sensor tiver pinos macho.
3.  *GND:* Conecte o pino *GND* do sensor a *qualquer furo na linha '-' (GND)* da sua protoboard (ou diretamente ao pino GND do Arduino). Use um jumper Macho-Fêmea.
4.  *Trig:* Conecte o pino *Trig* do sensor ao pino digital *9* da sua *BlackBoard*. Use um jumper Macho-Fêmea.
5.  *Echo:* Conecte o pino *Echo* do sensor ao pino digital *10* da sua *BlackBoard*. Use um jumper Macho-Fêmea.

* *Verificação:* Os 4 pinos do sensor estão conectados, seguindo os pinos 9, 10, 5V e GND conforme o código.

### Passo 3.3: Conectando o Buzzer Passivo

O buzzer passivo geralmente tem dois pinos. Se um estiver marcado com '+' ou for mais longo, é o positivo.

1.  Pegue seu *buzzer passivo*.
2.  Conecte o pino *positivo (+)* do buzzer (se houver) a *qualquer furo em uma coluna vertical na protoboard*.
3.  Pegue um *fio jumper Macho-Macho*.
4.  Conecte uma ponta na mesma coluna que o pino positivo do buzzer na protoboard.
5.  Conecte a outra ponta ao pino digital *8* da sua *BlackBoard*.
6.  Conecte o pino *negativo (-)* do buzzer a *qualquer furo na linha '-' (GND)* da sua protoboard.

* *Verificação:* O buzzer está conectado ao pino 8 do Arduino e ao GND.

### Passo 3.4: Conectando o LED com o Resistor

O LED tem uma perna mais longa (ânodo, positivo) e uma mais curta (cátodo, negativo). O resistor não tem polaridade.

1.  Pegue o *resistor de 220 ohms*.
2.  Insira uma das pontas do resistor em *qualquer furo em uma coluna vertical na protoboard*.
3.  Pegue a perna *mais longa (ânodo)* do *LED*.
4.  Insira a perna longa do LED em *qualquer outro furo na *mesma coluna vertical** onde você conectou o resistor. (Assim, o resistor e o LED estão "em série" nessa coluna).
5.  Pegue um *fio jumper Macho-Macho*.
6.  Conecte uma ponta na *outra ponta do resistor* (aquela que não está conectada ao LED na protoboard).
7.  Conecte a outra ponta ao pino digital *13* da sua *BlackBoard*.
8.  Pegue a perna *mais curta (cátodo)* do *LED*.
9.  Insira a perna curta do LED em *qualquer furo na linha '-' (GND)* da sua protoboard.

* *Verificação:* O LED está conectado ao pino 13 (via resistor) e ao GND. O resistor está protegendo o LED.

### Passo 3.5: Organização (Opcional, mas recomendado)

Se você tem o case impresso em 3D:

1.  Encaixe a sua BlackBoard e a protoboard no case.
2.  Posicione o sensor ultrassônico no suporte frontal do case, direcionado para onde o cão (ou o pote de ração) estará.
3.  Organize os fios dentro do case para que não fiquem soltos ou emaranhados, garantindo que não haja curtos-circuitos.

---

## 4. Próximos Passos (Após a Montagem do Hardware):

Depois que tudo estiver conectado fisicamente:

1.  *Conecte o Cabo USB:* Conecte o cabo USB ao seu Arduino e ao computador.
2.  *Abra a IDE do Arduino:* Carregue o código do projeto "Ração Sonora" na IDE do Arduino.
3.  *Selecione a Placa Correta:* No menu "Ferramentas > Placa", selecione "Arduino/Genuino Uno".
4.  *Selecione a Porta Serial:* No menu "Ferramentas > Porta", selecione a porta COM correta que o Arduino está usando.
5.  *Carregue o Código:* Clique no botão "Carregar" (seta para a direita) na IDE do Arduino.
6.  *Teste!* Comece a testar o funcionamento, movendo a mão na frente do sensor para simular a aproximação do cão e observar/ouvir os sons e a luz.


