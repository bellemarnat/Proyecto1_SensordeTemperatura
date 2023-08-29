Aquí tienes un archivo "README.md" que proporciona información sobre el código y el proyecto:

# Proyecto de Monitoreo de Temperatura con ESP32

Este proyecto implementa un sistema de monitoreo de temperatura en tiempo real utilizando un microcontrolador ESP32. El sistema está diseñado para medir la temperatura ambiente y mostrarla de manera visual en un display de 7 segmentos y controlar un servo motor o LEDs indicadores de acuerdo con los valores de temperatura. 

## Contenido

- [Circuitos Utilizados](#circuitos-utilizados)
- [Funcionamiento](#funcionamiento)
- [Configuración](#configuración)
- [Notas](#notas)

## Circuitos Utilizados

Este proyecto utiliza varios componentes electrónicos clave para su funcionamiento:

- **Microcontrolador ESP32:** Este sera el microcontrolador utilizado para este proyecto
- **Servo Motor:** Un servo motor se utiliza para indicar visualmente la temperatura actual. Dependiendo de la temperatura, el servo se mueve hacia una posición que representa un rango de temperatura específico.
- **Sensor LM35:** Se emplea un sensor LM35 para adquirir la señal de temperatura. La lectura cruda del sensor se convierte en una temperatura en grados Celsius mediante una fórmula de conversión.
- **LEDs Indicadores:** LEDs de colores (rojo, verde y amarillo) se utilizan para representar visualmente el rango de temperatura. Cada color indica un intervalo de temperatura.
- **Display de 7 Segmentos:** Se utiliza un display de cuatro dígitos con segmentos de siete segmentos para mostrar en tiempo real la temperatura medida.

## Funcionamiento

El proyecto consiste en un bucle principal donde se leen los valores del sensor de temperatura y se realizan las acciones correspondientes. El sistema verifica si el botón ha sido presionado, aplicando el principio de debouncing para evitar lecturas incorrectas. Una vez que se detecta una pulsación, se activa la función `presionBoton()`.

En la función `presionBoton()`, se adquiere la lectura cruda del sensor LM35 y se convierte en una temperatura en grados Celsius. Esta temperatura se utiliza para controlar el servo motor o los LEDs indicadores, dependiendo del rango en el que se encuentre. Además, se muestra la temperatura en el display de siete segmentos.

## Configuración

Antes de cargar el código en el microcontrolador ESP32, asegúrate de configurar correctamente los siguientes parámetros en el archivo "config.h":

- `IO_USERNAME`: Tu nombre de usuario en Adafruit IO.
- `IO_KEY`: Tu clave de API de Adafruit IO.
- `WIFI_SSID`: El nombre de la red WiFi a la que deseas conectar al ESP32.
- `WIFI_PASS`: La contraseña de la red WiFi.

Una vez configurados estos parámetros, el microcontrolador se conectará a Adafruit IO y podrás visualizar y controlar el sistema de monitoreo de temperatura desde tu cuenta.

## Notas

Este proyecto es un ejemplo de cómo se puede implementar un sistema de monitoreo de temperatura utilizando componentes electrónicos comunes y un microcontrolador ESP32 con framework de Arduino. Las fórmulas de conversión, el control del servo y los LEDs, así como la visualización en el display de 7 segmentos, son elementos clave que permiten lograr una implementación efectiva de este sistema.

Este código y proyecto fueron desarrollados por Isabelle Marnat como parte de mi proyecto de Electronica Digital 2. 
