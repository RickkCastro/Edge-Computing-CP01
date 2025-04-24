# Edge-Computing CP01 - O Caso da Vinheria Agnello 🍷💡
Este repositório contém o projeto desenvolvido para o Checkpoint 01 da disciplina de Edge Computing (2025). Ele apresenta um protótipo funcional, desenvolvido em Arduino, para monitoramento ambiental com foco em luminosidade, a fim de preservar a qualidade dos vinhos da Vinheria Agnello.

## 🧩 Descrição do Desafio
A Vinheria Agnello contratou nossa equipe para desenvolver um sistema de monitoramento ambiental. A qualidade do vinho armazenado é fortemente influenciada pelas condições do ambiente — especialmente pela temperatura, umidade e luminosidade. Este primeiro desafio foca exclusivamente na luminosidade.

### Objetivos:
Desenvolver um sistema com Arduino capaz de capturar o nível de luminosidade do ambiente utilizando um sensor LDR.

Utilizar LEDs indicativos para mostrar o estado da luminosidade:

✅ Verde: Luminosidade adequada.

⚠️ Amarelo: Luminosidade em nível de alerta.

❌ Vermelho: Luminosidade inaceitável.

Acionar uma buzina (buzzer) quando a luminosidade estiver em estado de alerta.

## 💡 Solução
O projeto foi desenvolvido e simulado no Tinkercad, utilizando os seguintes componentes:

### Componentes utilizados:
1 × Arduino Uno

1 × Sensor LDR (fotorresistor)

1 × Resistor de 10 kΩ (para o divisor de tensão com o LDR)

3 × Resistores de 1 kΩ (para os LEDs)

1 × LED verde

1 × LED amarelo

1 × LED vermelho

1 × Buzzer piezoelétrico

1 × Protoboard

Jumpers

### Esquema do Circuito:
![image](https://github.com/user-attachments/assets/6551f686-f69a-4fc5-b131-5d4f29270a7f)

### Como simular:
Para simular o projeto basta acessar o link abaixo <br>
https://www.tinkercad.com/things/5L637MSlsq4-cp1-edge-computing?sharecode=zX3l_jkplpagWKeVlfqvYBsqAJQtutKj2qPQf0hEFrg

## 🧩 Montagem do Circuito
1. Sensor de Luminosidade (LDR)
- Conecte uma perna do LDR na alimentação positiva (5V).
- Conecte a outra perna à entrada analógica A0 do Arduino e também a um resistor de 10kΩ.
- A outra ponta do resistor vai para o GND.

2. LEDs Indicadores
- Conecte cada LED em série com um resistor de 220Ω ou 1kΩ para limitar a corrente.
- Conecte os cátodos (lado curto) dos LEDs ao GND.
- Conecte os ânodos (lado longo) nas portas digitais:
- LED verde → pino 5 do Arduino
- LED amarelo → pino 6
- LED vermelho → pino 7

3. Buzzer
- Conecte o pino positivo (+) do buzzer ao pino 2 do Arduino.
- Conecte o pino negativo (–) do buzzer ao GND.

4. Conexões de Alimentação
- Conecte o GND do Arduino ao trilho negativo da protoboard.
- Conecte o 5V do Arduino ao trilho positivo da protoboard.

5. Executar o código do repositório na IDE do Arduíno

## 👥 Integrantes do Grupo
@erickanciaes
Erick Munhoes Anciães – RM: 561484

@rickkcastro
Henrique Castro de Matos – RM: 564560

@fernandesjp
João Paulo Fernandes – RM: 563430

@jopedrofigueiredo
João Pedro Mendes de Figueiredo – RM: 558779

@patricxk7
Patrick Canuto dos Santos – RM: 563776
