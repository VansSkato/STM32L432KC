📘 Configuración del Registro MODER en STM32L432xx
🧠 ¿Cómo funciona el registro GPIOx->MODER?

ejemplo: MODER 1 = PA0   [1:0] CADA MODER TIENE 2 BITS, 1 Y 0, DEPENDE LA CONFIGURACION QUE QUIERAS PARA EL 
ejemplo2: MODER 2 = PA1  [1:0] CADA MODER TIENE 2 BITS, 1 Y 0, DEPENDE LA CONFIGURACION QUE QUIERAS PARA EL 



En el microcontrolador STM32L432xx, cada puerto GPIO (por ejemplo GPIOA) tiene un registro llamado:

GPIOx->MODER

Este registro es de 32 bits y define el modo de operación de cada pin del puerto.

🔎 Estructura del Registro

Cada pin del puerto utiliza 2 bits consecutivos dentro del registro MODER.

Pin	Bits en MODER
PA0	bits 1:0
PA1	bits 3:2
PA2	bits 5:4
PA3	bits 7:6
...	...

La fórmula general para encontrar los bits correspondientes a un pin es:

posición = pin_number × 2

Ejemplos:

PA0 → 0 × 2 = bits 1:0

PA1 → 1 × 2 = bits 3:2

PA2 → 2 × 2 = bits 5:4

PA5 → 5 × 2 = bits 11:10

⚙️ Modos de operación

Cada grupo de 2 bits puede tomar los siguientes valores:

Valor	Modo
00	Input
01	Output
10	Alternate Function
11	Analog

🛠 Ejemplo: Configurar PA0 como salida
GPIOA->MODER &= ~(GPIO_MODER_MODE0_Msk);  // Limpia bits 1:0
GPIOA->MODER |= GPIO_MODER_MODE0_0;      // Coloca 01 (Output)

🛠 Ejemplo: Configurar PA1 como salida
GPIOA->MODER &= ~(GPIO_MODER_MODE1_Msk);  // Limpia bits 3:2
GPIOA->MODER |= GPIO_MODER_MODE1_0;      // Coloca 01 (Output)

🛠 Ejemplo: Configurar PA2 como salida
GPIOA->MODER &= ~(GPIO_MODER_MODE2_Msk);  
GPIOA->MODER |= GPIO_MODER_MODE2_0;

Esto coloca el patrón 01 en los bits 5:4.

🧩 Concepto Clave

El error más común al trabajar con MODER es pensar que:

bit 0 = PA0
bit 1 = PA1
bit 2 = PA2

Esto es incorrecto.

Cada pin usa 2 bits, no 1.

🔥 Regla mental rápida

Siempre recuerda:

Cada pin ocupa 2 bits.
Los bits empiezan en (pin × 2).

