# wemos-cat-feeder
Wemos hardware based Internet connected cat feeder.

## Getting Started
### Prerequisites

Download and install the [Arduino IDE](https://www.arduino.cc/en/Main/Software) on your computer.

Download and create [blynk](http://www.blynk.cc/) account

Wifi connection available, for the device need internet connection.

### configuration

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

## Current Status

Working prototype, with swiping servo and delay before swipe back to initial position.

## TODO

- add detailed mechanical and hardware design
- create how-to on [instructables.com](http://www.instructables.com)

## Contributing

Just pull request

## Authors

 - **Ibnu Triyono** - *Programmer, Hardware Engineer* - [ibnutri](https://github.com/ibnutri)
 - **Iksan Peryoga** - *Idea, Hardware Engineer* - [iperyogaa](https://www.facebook.com/iperyogaa)

## License

This project is licensed under the MIT License - see the [LICENSE.md](LICENSE.md) file for details

## Acknowledgments

* Thank you to Wemos to creating such a nice development board
* Arduino for making esp8266 available on the IDE


