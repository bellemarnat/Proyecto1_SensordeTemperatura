//************************************************************************
// POR RAZONES DE SEGURIDAD, NO PUBLIQUE ESTE CÓDIGO CON MIS CLAVES, SIN EMBARGO APARECERA CON MIS CLAVES EN LA ENTREGA
//******************************* Adafruit IO Config *******************************

// visit io.adafruit.com if you need to create an account,
// or if you need your Adafruit IO key.
#define IO_USERNAME  "mar21020"
#define IO_KEY       "aio_GuZf94epKPxlXwfrydE7AihdTnaq"

//******************************* WIFI *******************************

#define WIFI_SSID "Belle"
#define WIFI_PASS "12345678"
#include "AdafruitIO_WiFi.h"

AdafruitIO_WiFi io(IO_USERNAME, IO_KEY, WIFI_SSID, WIFI_PASS);
