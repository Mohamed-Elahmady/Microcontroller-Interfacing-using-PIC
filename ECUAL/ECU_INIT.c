/* 
 * File:   ECU_INIT.c
 * Author: Mohamed Elahmady
 *
 * Created on October 1, 2024, 5:39 PM
 */

#include "ECU_INIT.h"

// each variable was defined here must be declared  as extern variable in driver main

KEYPAD_T keypad1 = {
    .KEYPAD_ROWS_PINS[0].PORT = PORTC_INDEX,
    .KEYPAD_ROWS_PINS[0].PIN = GPIO_PIN0,
    .KEYPAD_ROWS_PINS[0].DIRECTION = GPIO_DIRECTION_OUTPUT,
    .KEYPAD_ROWS_PINS[0].LOGIC = GPIO_LOW,
    
    .KEYPAD_ROWS_PINS[1].PORT = PORTC_INDEX,
    .KEYPAD_ROWS_PINS[1].PIN = GPIO_PIN1,
    .KEYPAD_ROWS_PINS[1].DIRECTION = GPIO_DIRECTION_OUTPUT,
    .KEYPAD_ROWS_PINS[1].LOGIC = GPIO_LOW,
    
    .KEYPAD_ROWS_PINS[2].PORT = PORTC_INDEX,
    .KEYPAD_ROWS_PINS[2].PIN = GPIO_PIN2,
    .KEYPAD_ROWS_PINS[2].DIRECTION = GPIO_DIRECTION_OUTPUT,
    .KEYPAD_ROWS_PINS[2].LOGIC = GPIO_LOW,
    
    .KEYPAD_ROWS_PINS[3].PORT = PORTC_INDEX,
    .KEYPAD_ROWS_PINS[3].PIN = GPIO_PIN3,
    .KEYPAD_ROWS_PINS[3].DIRECTION = GPIO_DIRECTION_OUTPUT,
    .KEYPAD_ROWS_PINS[3].LOGIC = GPIO_LOW,
    
    .KEYPAD_COLUMNS_PINS[0].PORT = PORTC_INDEX,
    .KEYPAD_COLUMNS_PINS[0].PIN = GPIO_PIN4,
    .KEYPAD_COLUMNS_PINS[0].DIRECTION = GPIO_DIRECTION_INPUT,
    
    .KEYPAD_COLUMNS_PINS[1].PORT = PORTC_INDEX,
    .KEYPAD_COLUMNS_PINS[1].PIN = GPIO_PIN5,
    .KEYPAD_COLUMNS_PINS[1].DIRECTION = GPIO_DIRECTION_INPUT,
    
    .KEYPAD_COLUMNS_PINS[2].PORT = PORTC_INDEX,
    .KEYPAD_COLUMNS_PINS[2].PIN = GPIO_PIN6,
    .KEYPAD_COLUMNS_PINS[2].DIRECTION = GPIO_DIRECTION_INPUT,
    
    .KEYPAD_COLUMNS_PINS[3].PORT = PORTC_INDEX,
    .KEYPAD_COLUMNS_PINS[3].PIN = GPIO_PIN7,
    .KEYPAD_COLUMNS_PINS[3].DIRECTION = GPIO_DIRECTION_INPUT,
    
};

LED_T led1 = {
    .PORT = PORTD_INDEX,
    .PIN = GPIO_PIN0,
    .LOGIC = GPIO_LOW
};

void ECU_LAYER_INITIALIZE(void){
    Std_ReturnType Ret = E_NOT_OK;
    Ret = KEYPAD_INITIALIZE(&keypad1);
    Ret = LED_INITIALIZE(&led1);
}