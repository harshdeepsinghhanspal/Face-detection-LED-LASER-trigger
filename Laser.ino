#include <cvzone.h>

SerialData serialData(3,1);
int valsRec[3];

int red = 8;

void setup() {
  serialData.begin();
  pinMode(red, OUTPUT);

}

void loop() {
 serialData.Get(valsRec);
   digitalWrite(red, valsRec[0]);
}
