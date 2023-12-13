#include <NewPing.h>
#include <SoftwareSerial.h>
#include <Servo.h>

#define RightmotorF 7 // digital pin 7 for right motor forward
#define RightmotorB 8 // digital pin 8 for right motor backward
#define LeftmotorF 5   // digital pin 5 for left motor forward
#define LeftmotorB 6   // digital pin 6 for left motor backward

SoftwareSerial BT(10, 11); // Assigning Arduino's RXD, TXD

void setup() {
  Serial.begin(9600);

  pinMode(RightmotorF, OUTPUT);
  pinMode(RightmotorB, OUTPUT);
  pinMode(LeftmotorF, OUTPUT);
  pinMode(LeftmotorB, OUTPUT);

  BT.begin(115200);
  BT.print("555");
  delay(100);
  BT.println("0, 9600,N");
  BT.begin(9600);
}

void Forward() {
  digitalWrite(RightmotorF, HIGH);
  digitalWrite(RightmotorB, LOW);
  digitalWrite(LeftmotorF, HIGH);
  digitalWrite(LeftmotorB, LOW);
}

void Backward() {
  digitalWrite(RightmotorF, LOW);
  digitalWrite(RightmotorB, HIGH);
  digitalWrite(LeftmotorF, LOW);
  digitalWrite(LeftmotorB, HIGH);
}

void Left() {
  digitalWrite(RightmotorF, HIGH);
  digitalWrite(RightmotorB, LOW);
  digitalWrite(LeftmotorF, LOW);
  digitalWrite(LeftmotorB, HIGH);
}

void Right() {
  digitalWrite(RightmotorF, LOW);
  digitalWrite(RightmotorB, HIGH);
  digitalWrite(LeftmotorF, HIGH);
  digitalWrite(LeftmotorB, LOW);
}

void Stop() {
  digitalWrite(RightmotorF, LOW);
  digitalWrite(RightmotorB, LOW);
  digitalWrite(LeftmotorF, LOW);
  digitalWrite(LeftmotorB, LOW);
}

void loop() {
  // Your main code logic goes here
}void setup() {
  // put your setup code here, to run once:

}

void loop() {
  // put your main code here, to run repeatedly:

}
