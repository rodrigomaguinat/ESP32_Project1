#### Notes

- En el simulador no se aprecia bien con respecto al tiempo, debido a que el LED debe parpadear intercaladamente cada segundo

 		timerAlarmWrite(timer0, 1000000, true);

	El segundo parametro es con respecto a la Frecuencia, lo que nos da cada 1 segundo

- Cuando cambiamos a 10 mili seg y lo probamos en nuestro ESP32, notaremos que el LED pareciera que se mantiene continuamente encendido, esto es porque la ejecución a esa frecuencia no se aprecia el encendido y apagado
		timerAlarmWrite(timer0, 10000, true);


#### Prototype and simulation

[![Captura-de-pantalla-2022-09-13-173941.jpg](https://i.postimg.cc/3wj216VD/Captura-de-pantalla-2022-09-13-173941.jpg)](https://postimg.cc/McTcKsWW)
