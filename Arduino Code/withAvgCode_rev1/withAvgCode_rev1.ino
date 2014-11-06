
int redAvg=0;
int greenAvg=0;
int blueAvg=0;

int redPin=2;
int greenPin=3;
int bluePin=4;

void setup(){
  
  Serial.begin(9600);
  analogWrite(redPin,0);
  analogWrite(greenPin,0);
  analogWrite(bluePin,0);
}

void loop(){
  
  if(Serial.available()){
    char temp=Serial.read();
    if(temp=='a')
    {
        addRed();
    }
    else if(temp=='b')
    {
        addGreen();
    }
    else if(temp=='c')
    {
        addBlue();
    }
    else if(temp=='d')
    {
        addYellow();
    }
    
    /* for debugging */
    
    else if(temp=='*')
    {
        reset();
    }
    else if(temp=='#')
    {
     white();
    }
    /*end else if */
  }
  
  analogWrite(redPin,redAvg);
  analogWrite(greenPin,greenAvg);
  analogWrite(bluePin,blueAvg);
}

void average(){
  redAvg/=2;
  greenAvg/=2;
  blueAvg/=2;
}

void reset(){
  redAvg=0;
  greenAvg=0;
  blueAvg=0;
}

void white(){
  redAvg=255;
  greenAvg=255;
  blueAvg=255;
}


void addRed(){
 /* redAvg+=255;
  greenAvg+=0;
  blueAvg+=0;
  average();
  */
  
  redAvg=redAvg*0.8 + 0.2*255;
  greenAvg=greenAvg*0.8 + 0.2*0;
  blueAvg=blueAvg*0.8 + 0.2*0;
  
}

void addGreen(){
  /*redAvg+=0;
  greenAvg+=255;
  blueAvg+=0;
  average(); */
  
  redAvg=redAvg*0.8 + 0.2*0;
  greenAvg=greenAvg*0.8 + 0.2*255;
  blueAvg=blueAvg*0.8 + 0.2*0;
}

void addBlue(){
  /*redAvg+=0;
  greenAvg+=0;
  blueAvg+=255;
  average();*/
  redAvg=redAvg*0.8 + 0.2*0;
  greenAvg=greenAvg*0.8 + 0.2*0;
  blueAvg=blueAvg*0.8 + 0.2*255;
}

void addYellow(){
  /*redAvg+=255;
  greenAvg+=222;
  blueAvg+=0;
  average();*/
  redAvg=redAvg*0.8 + 0.2*255;
  greenAvg=greenAvg*0.8 + 0.2*222;
  blueAvg=blueAvg*0.8 + 0.2*0;
}
