#include "button.h"
#include "interrupt.h"
#include "matrix.h"
#include "pico/bootrom.h"
#include "pico/stdlib.h"
#include <stdio.h>

// Função que lida com eventos de interrupção
void gpio_irq_handler(uint gpio, uint32_t events) {
    // eventos de acionamento de botões
    if(gpio == BUTTON_1 || gpio == BUTTON_2 || gpio == JOYSTICK_BUTTON) {
        // tratamento de debouncing dos botões
        if(!debouncing(300))
            return;
        // avança para o próximo número (máximo 9)
        if(gpio == BUTTON_1){

        }
    }
}