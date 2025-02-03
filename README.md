# Projeto: Controle de LEDs com Botões e Matriz de LEDs

# Vídeo sobre o projeto: https://youtu.be/SIyTs2WZfxw

## Autor
**Davi Bezerra Cavalcanti**

## Sobre o Projeto
Este projeto foi desenvolvido no âmbito do **Embarcatech**, dentro do curso **Formação Básica em Software Embarcado**. O código implementa o controle de LEDs, botões e manejo de interrupções utilizando a Raspberry Pi Pico W.

## Estrutura do Projeto

```
/project-root
│── src/
│   └── main.c  # Código-fonte principal
│── wokwi/
│   └── ...     # Arquivos para simulação no Wokwi
```

## Funcionalidades

- **Controle de LEDs**:
  - Inicializa e pisca um LED vermelho em um padrão específico (5 ciclos de 200ms, sendo 100ms ligado e 100ms desligado).

- **Interação com Botões**:
  - Configura três botões com interrupções para detecção de eventos de borda de descida.
  - Os botões são:
    - `BUTTON_A`: Incrementa o número exibido pelos leds até o valor máximo de 9
    - `BUTTON_B`: Decremente o número exibido pelos leds até o valor mínimo de 0
    - `JOYSTICK_BUTTON`: Entra no modo bootsel da placa

- **Manipulação da Matriz de LEDs WS2812**:
  - Inicializa a matriz de LEDs utilizando a PIO (Programável I/O) da Raspberry Pi Pico.
  - Exibe inicialmente o número zero na matriz de LEDs.

- **Uso de Interrupções**:
  - As interrupções são configuradas para detectar eventos nos botões, possibilitando a interação em tempo real sem a necessidade de polling constante.

## Dependências e Bibliotecas Utilizadas

O código utiliza as seguintes bibliotecas presentes na pasta "lib":

```c
#include "lib/led.h"       // Manipulação de LEDs
#include "lib/button.h"    // Configuração e uso de botões
#include "lib/interrupt.h" // Manipulação de interrupções
#include "lib/matrix.h"    // Controle da matriz de LEDs WS2812
#include "ws2812.pio.h"    // Controle de LEDs WS2812
```

Além de outras bibliotecas como:

```c
#include <stdio.h>
#include "pico/stdlib.h"
#include "hardware/pwm.h"
#include "hardware/pio.h"
#include "ws2812.pio.h"
```

### Dependências do Projeto
Para compilar e executar corretamente o projeto, é necessário instalar as seguintes extensões no **VS Code**:
- **CMake**
- **CMake Tools**
- **Raspberry Pi Pico SDK**

## Como Executar

1. Compile o código e carregue-o na Raspberry Pi Pico.
2. Conecte os LEDs e botões conforme especificado.
3. Acompanhe a exibição dos números na matriz de LEDs e a resposta aos botões.
4. Utilize o Wokwi para simulação, se necessário.

## Simulação no Wokwi

Para simular o funcionamento no Wokwi, utilize os arquivos dentro da pasta `wokwi/`.

---
Este projeto demonstra conceitos essenciais de software embarcado, como o uso de GPIOs, interrupções e controle de LEDs com a Raspberry Pi Pico.

