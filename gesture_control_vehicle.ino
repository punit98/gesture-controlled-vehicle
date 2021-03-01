
int xPin=A0;
int yPin=A1;

int out1=8;     //output1 for HT12E IC
int out2=9;     //output1 for HT12E IC
int out3=10;    //output1 for HT12E IC
int out4=11;    //output1 for HT12E IC
int out1_help=7;
int out2_help=6;
int out3_help=5;
int out4_help=4;

void setup(){
  pinMode(xPin,INPUT);
  pinMode(yPin,INPUT);

  pinMode(out1,OUTPUT);
  pinMode(out2,OUTPUT);
  pinMode(out3,OUTPUT);
  pinMode(out4,OUTPUT);
  pinMode(out1_help,OUTPUT);
  pinMode(out2_help,OUTPUT);
  pinMode(out3_help,OUTPUT);
  pinMode(out4_help,OUTPUT);
  Serial.begin(9600);
  Serial.println("Begin:");
}


void loop() 
{
  int xval=analogRead(xPin);
  int yval=analogRead(yPin);
Serial.print("xval=" );
Serial.println(xval);
Serial.print("yval=" );
Serial.println(yval);


if ((xval>330 && xval<350) && (yval>325 && yval<345)) //stop
  {
    digitalWrite(out1,LOW);  
    digitalWrite(out2,LOW);   
    digitalWrite(out3,LOW);   
    digitalWrite(out4,LOW);
    Serial.println("stop");
    digitalWrite(out1_help, LOW);
      digitalWrite(out2_help, LOW);
      digitalWrite(out3_help, LOW);
      digitalWrite(out4_help, LOW);
      Serial.print("xval=" );
Serial.println(xval);
Serial.print("yval=" );
Serial.println(yval);
    } 

  
    if ((xval>360) && (yval>325 && yval<345)) //forward
   {
     digitalWrite(out1,HIGH);  
     digitalWrite(out2,LOW);   
     digitalWrite(out3,HIGH);  
     digitalWrite(out4,LOW);
      Serial.println("forward");
      digitalWrite(out1_help, HIGH);
      digitalWrite(out2_help, LOW);
      digitalWrite(out3_help, HIGH);
      digitalWrite(out4_help, LOW);
      Serial.print("xval=" );
Serial.println(xval);
Serial.print("yval=" );
Serial.println(yval);
      
      
   }
    if ((xval<320) && (yval>325 && yval<345)) //backward
  {
   digitalWrite(out1,LOW);   
   digitalWrite(out2,HIGH);  
   digitalWrite(out3,LOW);   
   digitalWrite(out4,HIGH);
      Serial.println("backward");
      digitalWrite(out1_help, LOW);
      digitalWrite(out2_help, HIGH);
      digitalWrite(out3_help, LOW);
      digitalWrite(out4_help, HIGH);
      Serial.print("xval=" );
Serial.println(xval);
Serial.print("yval=" );
Serial.println(yval);
      
    }   

    if ((xval>330 && xval<350) && (yval>360)) //left
    {
      digitalWrite(out1,HIGH);  
      digitalWrite(out2,LOW);   
      digitalWrite(out3,LOW);   
      digitalWrite(out4,LOW);
      Serial.println("left");
      digitalWrite(out1_help, HIGH);
      digitalWrite(out2_help, LOW);
      digitalWrite(out3_help, LOW);
      digitalWrite(out4_help, LOW);
      Serial.print("xval=" );
Serial.println(xval);
Serial.print("yval=" );
Serial.println(yval);
       }


    if ((xval>330 && xval<350) && (yval<315))//right
    {
      digitalWrite(out1,LOW);  
      digitalWrite(out2,LOW);   
      digitalWrite(out3,HIGH);   
      digitalWrite(out4,LOW);
      Serial.println("right");
      digitalWrite(out1_help, LOW);
      digitalWrite(out2_help, LOW);
      digitalWrite(out3_help, HIGH);
      digitalWrite(out4_help, LOW);
      Serial.print("xval=" );
Serial.println(xval);
Serial.print("yval=" );
Serial.println(yval);
      
    }
  
}
