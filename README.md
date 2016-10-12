# wemos-cat-feeder
Connected Cat Feeder

# configuration

create configuration.ino in wemos_cat_feeder directory
fill it with this:

```processing
#include "Arduino.h"
void config(){  
  auth = "YourAuthToken"; // Your Auth token from Blynk
  ssid = "YourNetworkName"; // Your WiFi credentials.
  pass = "YourPassword"; // Set password to "" for open networks.
}

```
