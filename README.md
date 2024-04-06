# RC Car Control with ESP32 and Dabble App

## Overview

This project involves building a remote-controlled car using an ESP32 microcontroller (specifically, Wemos Lolin32) and the Dabble application for Android and iOS devices. The Dabble app communicates with the ESP32 controller via Bluetooth and utilizes an H-bridge L293 to control two DC motors, enabling the movement of the car in different directions.

## Resumen

Este proyecto consiste en construir un carro controlado remotamente utilizando un microcontrolador ESP32 (específicamente, Wemos Lolin32) y la aplicación Dabble para dispositivos Android e iOS. La aplicación Dabble se conecta al controlador ESP32 a través de Bluetooth y utiliza un puente H L293 para controlar dos motores DC, permitiendo el movimiento del carro en diferentes direcciones.

Android: https://play.google.com/store/apps/details?id=io.dabbleapp
iOS: https://apps.apple.com/us/app/dabble-bluetooth-controller/id1472734455 

## Hardware Requirements

- ESP32 microcontroller (Wemos Lolin32)
- H-bridge L293
- Two DC motors
- Chassis, wheels, and other mechanical components for the car
- Power source (e.g., battery pack)

## Requisitos de Hardware

- Microcontrolador ESP32 (Wemos Lolin32)
- Puente H L293
- Dos motores DC
- Chasis, ruedas y otros componentes mecánicos para el carro
- Fuente de energía (por ejemplo, paquete de baterías)

## Software Requirements

- Arduino IDE
- Dabble app (available on Google Play Store for Android or Apple App Store for iOS)

## Requisitos de Software

- Arduino IDE
- Aplicación Dabble (disponible en Google Play Store para Android o Apple App Store para iOS)

## Installation and Setup

1. Install the Arduino IDE on your computer if you haven't already.
2. Install the Dabble app on your Android or iOS device.
3. Connect the ESP32 microcontroller to your computer via USB.
4. Open the provided Arduino sketch in the Arduino IDE.
5. Ensure that the necessary libraries for Dabble are installed in the Arduino IDE.
6. Upload the sketch to the ESP32 microcontroller.
7. Open the Dabble app on your mobile device and pair it with the ESP32 controller via Bluetooth.

## Instalación y Configuración

1. Instale el Arduino IDE en su computadora si aún no lo ha hecho.
2. Instale la aplicación Dabble en su dispositivo Android o iOS.
3. Conecte el microcontrolador ESP32 a su computadora mediante USB.
4. Abra el boceto de Arduino proporcionado en el Arduino IDE.
5. Asegúrese de que las bibliotecas necesarias para Dabble estén instaladas en el Arduino IDE.
6. Cargue el boceto en el microcontrolador ESP32.
7. Abra la aplicación Dabble en su dispositivo móvil y empareje con el controlador ESP32 mediante Bluetooth.

## Usage

- Once the setup is complete, you can control the RC car using the Dabble app on your mobile device.
- Use the directional buttons on the Dabble app to move the car forward, backward, left, or right.
- Additional features such as rotating left or right are also available.
- Press the corresponding buttons on the Dabble app to perform these actions.

## Uso

- Una vez que la configuración esté completa, puede controlar el carro RC utilizando la aplicación Dabble en su dispositivo móvil.
- Utilice los botones direccionales en la aplicación Dabble para mover el carro hacia adelante, hacia atrás, a la izquierda o a la derecha.
- También están disponibles funciones adicionales como rotar a la izquierda o a la derecha.
- Presione los botones correspondientes en la aplicación Dabble para realizar estas acciones.

## Notes

- Ensure that the power supply for the motors and the ESP32 microcontroller is adequate to avoid any issues during operation.
- Adjust the GPIO pin configurations in the code if you're using a different ESP32 board or have connected the motors to different pins.

## Notas

- Asegúrese de que la fuente de energía para los motores y el microcontrolador ESP32 sea adecuada para evitar problemas durante la operación.
- Ajuste las configuraciones de los pines GPIO en el código si está utilizando una placa ESP32 diferente o ha conectado los motores a pines diferentes.

## Credits

This project utilizes the Dabble library for ESP32, which is developed by STEMpedia.

## Créditos

Este proyecto utiliza la biblioteca Dabble para ESP32, desarrollada por STEMpedia.

---
**Disclaimer:** *This project is provided as-is without any warranty. Use it at your own risk. Always ensure proper safety measures when working with electronic components and machinery.*
