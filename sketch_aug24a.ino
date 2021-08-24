//define control wheel IO
int wheelPin1=13;
int wheelPin2=12;
int wheelPin3=11;
int wheelPin4=10;
int wheelPin5=7;
int wheelPin6=6;
int wheelPin7=5;
int wheelPin8=4;

void setup() {
     pinMode(wheelPin1,OUTPUT);  
     pinMode(wheelPin2,OUTPUT);
     pinMode(wheelPin3,OUTPUT);
     pinMode(wheelPin4,OUTPUT);
     pinMode(wheelPin5,OUTPUT);
     pinMode(wheelPin6,OUTPUT);
     pinMode(wheelPin7,OUTPUT);
     pinMode(wheelPin8,OUTPUT);
}

void forward(){
 digitalWrite(wheelPin1, HIGH);  //Left front wheel forward rotation
 digitalWrite(wheelPin5, LOW);
 digitalWrite(wheelPin2, HIGH); //Left rear wheel forward rotation
 digitalWrite(wheelPin6, LOW);
 digitalWrite(wheelPin3, HIGH); //Right front wheel forward rotation
 digitalWrite(wheelPin7, LOW); 
 digitalWrite(wheelPin4, HIGH); //Right rear wheel forward rotation
 digitalWrite(wheelPin8, LOW); 
}
void Turn_left(){
 digitalWrite(wheelPin1, LOW);  //Left front wheel stop
 digitalWrite(wheelPin5, LOW);
 digitalWrite(wheelPin2, LOW); //Left rear wheel stop
 digitalWrite(wheelPin6, LOW); 
 digitalWrite(wheelPin3, HIGH); //Right front wheel forward rotation
 digitalWrite(wheelPin7, LOW); 
 digitalWrite(wheelPin4, HIGH); //Right rear wheel forward rotation
 digitalWrite(wheelPin8, LOW); 
}
void Turn_right(){
 digitalWrite(wheelPin1, HIGH);  //Left front wheel forward rotation
 digitalWrite(wheelPin5, LOW);
 digitalWrite(wheelPin2, HIGH); //Left rear wheel forward rotation
 digitalWrite(wheelPin6, LOW); 
 digitalWrite(wheelPin3, LOW); //Right front wheel stop
 digitalWrite(wheelPin7, LOW); 
 digitalWrite(wheelPin4, LOW); //Right rear wheel stop
 digitalWrite(wheelPin8, LOW); 
}
void Stop()
{
  digitalWrite(wheelPin1, LOW);  //Left front wheel stop
  digitalWrite(wheelPin5, LOW);
  digitalWrite(wheelPin2, LOW); //Left rear wheel stop
  digitalWrite(wheelPin6, LOW); 
  digitalWrite(wheelPin3, LOW); //Right front wheel stop
  digitalWrite(wheelPin7, LOW); 
  digitalWrite(wheelPin4, LOW); //Right rear wheel stop
  digitalWrite(wheelPin8, LOW); 

}
void loop() {
   
     forward();
     delay(2000);
     Turn_right();
     delay(500);
     Stop();  
     delay(1000);
     forward();
     delay(20000);
     Stop();       //arrive B
     delay(1000); 
     Turn_right();
     delay(500);
     Stop();
     delay(1000);     
     forward();
     delay(1000);
     Stop();
     delay(500);
     Turn_left()
     delay(500);
     Stop();
     delay(500);
     forward();
     delay(20000);
     Turn_left();
     delay(500);
     Stop();
     delay(500);
     forward();
     delay(2000);
     Stop();       //arrive A
     while(1);
     
}
