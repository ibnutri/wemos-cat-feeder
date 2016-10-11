# wemos-cat-feeder
Connected Cat Feeder

# configuration

create configuration.ino in wemos_cat_feeder directory
fill it with this:

```
#include "Arduino.h"
void config(){
  // configuration sample
  
  auth[] = "YourAuthToken";

  // Your WiFi credentials.
  // Set password to "" for open networks.
  ssid[] = "YourNetworkName";
  pass[] = "YourPassword";
}

```
