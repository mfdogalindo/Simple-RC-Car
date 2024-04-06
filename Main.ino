#define CUSTOM_SETTINGS
#define INCLUDE_GAMEPAD_MODULE
#include <DabbleESP32.h>

// GPIO Map of Wemos Lolin 32
#define MOTOR_LF 12 // Left motor, foward
#define MOTOR_LR 13 // Left motor, reverse
#define MOTOR_RF 17 // Right motor, foward
#define MOTOR_RR 16 // Right motor, reverse

void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);          // make sure your Serial Monitor is also set at this baud rate.
  Dabble.begin("RC Car");       //set bluetooth name of your device

  pinMode(MOTOR_LF, OUTPUT); 
  pinMode(MOTOR_LR, OUTPUT); 
  pinMode(MOTOR_RF, OUTPUT); 
  pinMode(MOTOR_RR, OUTPUT); 
  pinMode(LED_BUILTIN, OUTPUT);
}

// ----------------------------------------------------------------------------
// Instructions to move the car
// ----------------------------------------------------------------------------

void To_Foward(){
    digitalWrite(MOTOR_LF, HIGH);
    digitalWrite(MOTOR_RF, HIGH);
    digitalWrite(MOTOR_LR, LOW);
    digitalWrite(MOTOR_RR, LOW);
}

void To_Back(){
    digitalWrite(MOTOR_LF, LOW);
    digitalWrite(MOTOR_RF, LOW);
    digitalWrite(MOTOR_LR, HIGH);
    digitalWrite(MOTOR_RR, HIGH);
}

void To_Left(){
    digitalWrite(MOTOR_LF, LOW);
    digitalWrite(MOTOR_RF, HIGH);
    digitalWrite(MOTOR_LR, LOW);
    digitalWrite(MOTOR_RR, LOW);
}

void Rotate_Left(){
    digitalWrite(MOTOR_LF, LOW);
    digitalWrite(MOTOR_RF, HIGH);
    digitalWrite(MOTOR_LR, HIGH);
    digitalWrite(MOTOR_RR, LOW);
}

void To_Right(){
    digitalWrite(MOTOR_LF, HIGH);
    digitalWrite(MOTOR_RF, LOW);
    digitalWrite(MOTOR_LR, LOW);
    digitalWrite(MOTOR_RR, LOW);
}

void Rotate_Right(){
    digitalWrite(MOTOR_LF, HIGH);
    digitalWrite(MOTOR_RF, LOW);
    digitalWrite(MOTOR_LR, LOW);
    digitalWrite(MOTOR_RR, HIGH);
}

void Stop(){
    digitalWrite(MOTOR_LF, LOW);
    digitalWrite(MOTOR_RF, LOW);
    digitalWrite(MOTOR_LR, LOW);
    digitalWrite(MOTOR_RR, LOW);
}

// ----------------------------------------------------------------------------
// Main Loop
// ----------------------------------------------------------------------------

void loop() {
  Dabble.processInput();             //this function is used to refresh data obtained from smartphone.Hence calling this function is mandatory in order to get data properly from your mobile.
  Serial.print("KeyPressed: ");

  // Cambia el estado del led cada vez que se ejecuta un ciclo
  digitalWrite(LED_BUILTIN, !digitalRead(LED_BUILTIN));
  
  if (GamePad.isUpPressed())
  {
    Serial.print("Up");
    To_Front();
  }

  if (GamePad.isDownPressed())
  {
    Serial.print("Down");
    To_Back();
  }

  if (GamePad.isLeftPressed())
  {
    Serial.print("Left");
    To_Left();
  }

  if (GamePad.isRightPressed())
  {
    Serial.print("Right");
    To_Right();
  }

  if (GamePad.isSquarePressed())
  {
    Serial.print("Square");
    Rotate_Left();
  }

  if (GamePad.isCirclePressed())
  {
    Serial.print("Circle");
    Rotate_Right();
  }

  if (GamePad.isCrossPressed())
  {
    Serial.print("Cross");
    Stop();
  }

  if (GamePad.isTrianglePressed())
  {
    Serial.print("Triangle");
    Stop();
  }

  if (GamePad.isStartPressed())
  {
    Serial.print("Start");
    Stop();
  }

  if (GamePad.isSelectPressed())
  {
    Serial.print("Select");
  }


  Serial.println();
}