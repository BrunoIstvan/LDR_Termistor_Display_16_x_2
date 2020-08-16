#LDR_Termistor_Display_16_x_2

Projeto que exibe em um Display 16x2 a temperatura recuperada pelo Termistor e a luminosidade do ambiente recuperada pelo Fotoresistor.
O brilho do Display é controlado por um Potenciômetro de 10KOhms

##Pinagem:

###Display:
|Portas do Display|Portas do Arduino|
|-|-|
|VSS|GND|
|VDD|5V|
|V0|Pino do meio do Potenciômetro|
|RS|D7|
|RW|GND|
|E|D6|
|D0|-|
|D1|-|
|D2|-|
|D3|-|
|D4|D5|
|D5|D4|
|D6|D3|
|D7|D2|
|A|5V|
|K|Terminal Resistor 220Ohms -> GND|

###Termistor:
|Portas do Termistor|Portas do Arduino|
|-|-|
|Terminal 1|5V|
|Terminal 2 -> Resistor 10KOhms -> GND|Terminal 2 na A5|

###Fotoresistor:
|Portas do Fotoresistor|Portas do Arduino|
|-|-|
|Terminal 1|5V|
|Terminal 2 -> Resistor 1KOhms -> GND|Terminal 2 na A0|

###Potenciômetro:
|Portas do Potenciômetro|Portas do Arduino|
|-|-|
|Terminal 1|5V|
|Terminal 2|Ligado ao V0 do Display 16x2|
|Terminal 3|GND|





