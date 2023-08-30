//************************************************************************
// POR RAZONES DE SEGURIDAD, NO PUBLIQUE ESTE CÓDIGO CON MIS CLAVES, SIN EMBARGO APARECERA CON MIS CLAVES EN LA ENTREGA
//******************************* Adafruit IO Config *******************************

// visit io.adafruit.com if you need to create an account,
// or if you need your Adafruit IO key.
#define IO_USERNAME  "usuario"
#define IO_KEY       "clave"

//******************************* WIFI *******************************

#define WIFI_SSID "nombre de wifi"
#define WIFI_PASS "clave de wifi"
#include "AdafruitIO_WiFi.h"

AdafruitIO_WiFi io(IO_USERNAME, IO_KEY, WIFI_SSID, WIFI_PASS);
