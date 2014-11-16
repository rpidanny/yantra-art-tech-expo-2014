
int redAvg=0;
int greenAvg=0;
int blueAvg=0;

int redPin=3;
int greenPin=2;
int bluePin=4;

int redPin2=6;
int greenPin2=5;
int bluePin2=7;

int previousRed=0;
int previousGreen=0;
int previousBlue=0;

int delayTime=5;


int leddelay=40;
void setup(){
  
  Serial2.begin(9600);
  Serial.begin(9600);
  analogWrite(redPin,0);
  analogWrite(greenPin,0);
  analogWrite(bluePin,0);
}

void loop(){
  
  if(Serial2.available()){
    char temp=Serial2.read();
    Serial.println(temp);
    if(temp=='a')
    {
        fx1();
    }
    else if(temp=='b')
    {
        fx2();
    }
    else if(temp=='c')
    {
        fx3();
    }
    else if(temp=='d')
    {
        fx4();
    }
        else if(temp=='e')
    {
        fx5();
    }
        else if(temp=='f')
    {
        fx6();
    }
    
    /* for debugging */
    
    else if(temp=='*')
    {
        reset();
    }
    else if(temp=='%')
    {
     white();
    }
    /*end else if */
  }
  
  
}

void updatePWM(){
  analogWrite(redPin,redAvg);
  analogWrite(greenPin,greenAvg);
  analogWrite(bluePin,blueAvg);
}
void reset(){
  redAvg=0;
  greenAvg=0;
  blueAvg=0;
     updateLed1();
  updateLed2();
    updatePrevious();
}

void white(){
  redAvg=255;
  greenAvg=255;
  blueAvg=255;
     updateLed1();
  updateLed2();
    updatePrevious();
}

void updateLed1(){
//red led1
    if(previousRed>redAvg){
      for(int i=previousRed;i>=redAvg;i--){
         analogWrite(redPin,i);
         delay(delayTime);  
      }
    
    }
    else if(previousRed<redAvg){
     for(int i=previousRed;i<=redAvg;i++){
         analogWrite(redPin,i);
         delay(delayTime); 
      } 
    }
    
    //green led 1
    
      if(previousGreen>greenAvg){
      for(int i=previousGreen;i>=greenAvg;i--){
         analogWrite(greenPin,i);
         delay(delayTime);  
      }
    
    }
    else if(previousGreen<greenAvg){
      for(int i=previousGreen;i<=greenAvg;i++){
         analogWrite(greenPin,i);
         delay(delayTime);  
      }
    }
    
    //blue led 1
        if(previousBlue>blueAvg){
      for(int i=previousBlue;i>=blueAvg;i--){
         analogWrite(bluePin,i);
         delay(delayTime);  
      }
    
    }
    else if(previousBlue<blueAvg){
      for(int i=previousBlue;i<=blueAvg;i++){
         analogWrite(bluePin,i);
         delay(delayTime);  
      }
    }

}



void updateLed2(){
//red led1
    if(previousRed>redAvg){
      for(int i=previousRed;i>=redAvg;i--){
         analogWrite(redPin2,i);
         delay(delayTime);  
      }
    
    }
    else if(previousRed<redAvg){
     for(int i=previousRed;i<=redAvg;i++){
         analogWrite(redPin2,i);
         delay(delayTime); 
      } 
    }
    
    //green led 1
    
      if(previousGreen>greenAvg){
      for(int i=previousGreen;i>=greenAvg;i--){
         analogWrite(greenPin2,i);
         delay(delayTime);  
      }
    
    }
    else if(previousGreen<greenAvg){
      for(int i=previousGreen;i<=greenAvg;i++){
         analogWrite(greenPin2,i);
         delay(delayTime);  
      }
    }
    
    //blue led 1
        if(previousBlue>blueAvg){
      for(int i=previousBlue;i>=blueAvg;i--){
         analogWrite(bluePin2,i);
         delay(delayTime);  
      }
    
    }
    else if(previousBlue<blueAvg){
      for(int i=previousBlue;i<=blueAvg;i++){
         analogWrite(bluePin2,i);
         delay(delayTime);  
      }
    }

}




void fx1(){
 /* redAvg+=255;
  greenAvg+=0;
  blueAvg+=0;
  average();
  */
  
  redAvg=redAvg*0.6 + 0.4*255;
  greenAvg=greenAvg*0.6 + 0.4*150;
  blueAvg=blueAvg*0.6 + 0.4*0;
  
  
     updateLed1();
     delay(leddelay);
      updateLed2();
    updatePrevious();
}

void fx2(){
  /*redAvg+=0;
  greenAvg+=255;
  blueAvg+=0;
  average(); */
  
  redAvg=redAvg*0.6 + 0.4*255;
  greenAvg=greenAvg*0.6 + 0.4*0;
  blueAvg=blueAvg*0.6 + 0.4*0;
  updateLed1();
  delay(leddelay);
  updateLed2();
  updatePrevious();
}

void fx3(){
  /*redAvg+=0;
  greenAvg+=0;
  blueAvg+=255;
  average();*/
  redAvg=redAvg*0.6 + 0.4*40;
  greenAvg=greenAvg*0.6 + 0.4*255;
  blueAvg=blueAvg*0.6 + 0.4*140;
    updateLed1();
    delay(leddelay);
  updateLed2();
  updatePrevious();
}

void fx4(){
  /*redAvg+=255;
  greenAvg+=222;
  blueAvg+=0;
  average();*/
  redAvg=redAvg*0.6 + 0.4*255;
  greenAvg=greenAvg*0.6 + 0.4*52;
  blueAvg=blueAvg*0.6 + 0.4*214;
    updateLed1();
    delay(leddelay);
  updateLed2();
  updatePrevious();
}


void fx5(){
  /*redAvg+=255;
  greenAvg+=222;
  blueAvg+=0;
  average();*/
  redAvg=redAvg*0.6 + 0.4*140;
  greenAvg=greenAvg*0.6 + 0.4*255;
  blueAvg=blueAvg*0.6 + 0.4*50;
    updateLed1();
    delay(leddelay);
  updateLed2();
  updatePrevious();
}


void fx6(){
  /*redAvg+=255;
  greenAvg+=222;
  blueAvg+=0;
  average();*/
  redAvg=redAvg*0.6 + 0.4*180;
  greenAvg=greenAvg*0.6 + 0.4*0;
  blueAvg=blueAvg*0.6 + 0.4*255;
    updateLed1();
    delay(leddelay);
  updateLed2();
  updatePrevious();
}

void updatePrevious(){
  previousRed=redAvg;
  previousGreen=greenAvg;
  previousBlue=blueAvg;

}
