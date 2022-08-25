#define switch1 5
#define switch2 6
#define switch3 7
#define switch4 4
const int dlyTime =200;
void setup() {
  // put your setup code here, to run once:
  pinMode(switch1, INPUT_PULLUP);
  pinMode(switch2, INPUT_PULLUP);
  pinMode(switch3, INPUT_PULLUP);
  pinMode(switch4, INPUT_PULLUP);
  Serial.swap(1);
  Serial.begin(9600);
}

void loop() {
  if (digitalRead(switch1) == LOW) {
    Serial.println('1');
  } 
  else {                               
      if(digitalRead(switch2)==LOW){
        Serial.println('2');
      }
      else{
        if(digitalRead(switch3)==LOW){
          Serial.println('3');
        }
        else{
          if(digitalRead(switch4)==LOW){
            Serial.println('4');
          }
            else{
              Serial.println('0');
            }
          }
        }
      }
      delay(dlyTime);
  }

  
