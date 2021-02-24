


const int X[8] = {0,1,2,3,4,5,6,7};
const int Y[6] = {8,9,10,11,12,13};

void setup() {
  // put your setup code here, to run once:
  
  for (int i = 0; i < 8;i++){
    pinMode(X[i],OUTPUT);
  }

  for (int i = 0; i < 6; i++){
    pinMode(Y[i],OUTPUT);
  }

  blank();
}

void loop() {
  // put your main code here, to run repeatedly:


X_symbol();
smile_sad();
Cross();
}



void blank(){

  delay(1);
  for (int i = 0; i < 8;i++){
    digitalWrite(X[i],HIGH);
  }

  for (int i = 0; i < 6; i++){
    digitalWrite(Y[i],LOW);
  }
  
}
void Cross(){
  for(int i = 0; i < 1000; i++){
  
    digitalWrite(X[6],LOW);
    digitalWrite(Y[2],HIGH);
    blank();
    
    digitalWrite(X[5],LOW);
    digitalWrite(Y[2],HIGH);
    blank();
    
    digitalWrite(X[4],LOW);
    digitalWrite(Y[0],HIGH);
    digitalWrite(Y[1],HIGH);
    digitalWrite(Y[2],HIGH);
    digitalWrite(Y[3],HIGH);
    digitalWrite(Y[4],HIGH);
    blank();
    
    digitalWrite(X[3],LOW);
    digitalWrite(Y[2],HIGH);
    blank();
    
    digitalWrite(X[2],LOW);
    digitalWrite(Y[2],HIGH);
    blank();
    
    digitalWrite(X[1],LOW);
    digitalWrite(Y[2],HIGH);
    blank();

    digitalWrite(X[0],LOW);
    digitalWrite(Y[2],HIGH);
    blank();
}
}

void X_symbol(){
   
for(int i = 0; i < 1000; i++){
  
    digitalWrite(X[7],LOW);
    digitalWrite(Y[0],HIGH);
    digitalWrite(Y[5],HIGH);
    blank();
    
    digitalWrite(X[6],LOW);
    digitalWrite(Y[0],HIGH);
    digitalWrite(Y[5],HIGH);
    blank();
    
    digitalWrite(X[5],LOW);
    digitalWrite(Y[1],HIGH);
    digitalWrite(Y[4],HIGH);
    blank();
    
    digitalWrite(X[4],LOW);
    digitalWrite(Y[2],HIGH);
    digitalWrite(Y[3],HIGH);
    blank();
    
    digitalWrite(X[3],LOW);
    digitalWrite(Y[2],HIGH);
    digitalWrite(Y[3],HIGH);
    blank();

    
    digitalWrite(X[2],LOW);
    digitalWrite(Y[1],HIGH);
    digitalWrite(Y[4],HIGH);
    blank();
    
    digitalWrite(X[1],LOW);
    digitalWrite(Y[0],HIGH);
    digitalWrite(Y[5],HIGH);
    blank();
    
    digitalWrite(X[0],LOW);
    digitalWrite(Y[0],HIGH);
    digitalWrite(Y[5],HIGH);
    blank();
}
}



void smile_sad(){
  for(int i = 0;i<5;i++){
    for(int i = 0; i < 500; i++){
      
        digitalWrite(X[6],LOW);
        digitalWrite(Y[1],HIGH);
        digitalWrite(Y[3],HIGH);
        blank();
        
        digitalWrite(X[5],LOW);
        digitalWrite(Y[1],HIGH);
        digitalWrite(Y[3],HIGH);
        blank();
        
        digitalWrite(X[4],LOW);
        digitalWrite(Y[1],HIGH);
        digitalWrite(Y[3],HIGH);
        blank();
        
        digitalWrite(X[2],LOW);
        digitalWrite(Y[0],HIGH);
        digitalWrite(Y[4],HIGH);
        blank();
        
        digitalWrite(X[1],LOW);
        digitalWrite(Y[1],HIGH);
        digitalWrite(Y[2],HIGH);
        digitalWrite(Y[3],HIGH);
        blank();
    }
    
    for (int i = 0;i < 500;i++){
      
        digitalWrite(X[6],LOW);
        digitalWrite(Y[1],HIGH);
        digitalWrite(Y[3],HIGH);
        blank();
        
        digitalWrite(X[5],LOW);
        digitalWrite(Y[1],HIGH);
        digitalWrite(Y[3],HIGH);
        blank();
        
        digitalWrite(X[4],LOW);
        digitalWrite(Y[1],HIGH);
        digitalWrite(Y[3],HIGH);
        blank();
        
        
        digitalWrite(X[2],LOW);
        digitalWrite(Y[1],HIGH);
        digitalWrite(Y[2],HIGH);
        digitalWrite(Y[3],HIGH);
        blank();
        
        digitalWrite(X[1],LOW);
        digitalWrite(Y[0],HIGH);
        digitalWrite(Y[4],HIGH);
        blank();
    }
  }
}
