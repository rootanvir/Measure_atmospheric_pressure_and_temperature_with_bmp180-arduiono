# Requirement 
- Go to this github and [downlaod](https://github.com/sparkfun/BMP180_Breakout_Arduino_Library/tree/master) as zip 
- open your arduino ide (I am using version 2.3.2)
- goto sketch > include library > Add .zip library
- library added 
- obviously you need bmp180 module
# Connection with arduino
<img width="767" height="539" alt="Image" src="https://github.com/user-attachments/assets/c6e2195a-e32d-474b-b459-f19ac28543b9" />

# 🌧️ Rain Probability vs. Pressure (hPa)

| Pressure (hPa)     | Weather Trend              | Rain Probability     |
|--------------------|----------------------------|----------------------|
| **> 1020 hPa**     | Clear, dry, stable         | ⛅ Very Low           |
| **1015–1020 hPa**  | Fair, settled              | 🌤️ Low               |
| **1010–1015 hPa**  | Normal, slightly changing  | 🌥️ Moderate          |
| **1005–1010 hPa**  | Unstable, cloud build-up   | 🌧️ Increasing         |
| **1000–1005 hPa**  | Likely rain, low pressure  | 🌧️🌧️ High            |
| **< 1000 hPa**     | Stormy, very low pressure  | ⛈️ Very High          |
