/***************************************************************
**                                                            ** 
**                          Titol:                            **
**           Posar un nom representatiu del programa          **
**                                                            **
**   Nom: NOm del alumne                     DATA: xx/xx/20xx **
****************************************************************/
//************************ INCLUDE ******************************
 

//************************ VARIABLES ****************************
int unsigned temps =1000;
const int a=3; 
const int b=4;
const int c=5;
const int d=6;
const int e=7;
const int f=8;
const int g=9;
const int p=2;

//************************ SETUP ********************************

void setup(){                //configura el final de salida
 pinMode (a,OUTPUT);
 pinMode (b,OUTPUT);
 pinMode (c,OUTPUT);
 pinMode (d,OUTPUT);
 pinMode (e,OUTPUT);
 pinMode (f,OUTPUT);
 pinMode (g,OUTPUT);
 pinMode (p,INPUT);
  
}
//*************************** LOOP ******************************
void  loop() {           //inicia el bucle del programa
 //G
 digitalWrite (a,HIGH);
 digitalWrite (b,HIGH);
 digitalWrite (c,HIGH);
 digitalWrite (d,HIGH);
 digitalWrite (e,LOW);
 digitalWrite (f,HIGH);
 digitalWrite (g,HIGH);
 delay (temps);
 
 //A
 digitalWrite (a,HIGH);
 digitalWrite (b,HIGH);
 digitalWrite (c,HIGH);
 digitalWrite (d,LOW);
 digitalWrite (e,HIGH);
 digitalWrite (f,HIGH);
 digitalWrite (g,HIGH);
 delay (temps);
 //B
 digitalWrite (a,LOW);
 digitalWrite (b,LOW);
 digitalWrite (c,HIGH);
 digitalWrite (d,HIGH);
 digitalWrite (e,HIGH);
 digitalWrite (f,HIGH);
 digitalWrite (g,HIGH);
 delay (temps);
 //R
 digitalWrite (a,LOW);
 digitalWrite (b,LOW);
 digitalWrite (c,LOW);
 digitalWrite (d,LOW);
 digitalWrite (e,HIGH);
 digitalWrite (f,LOW);
 digitalWrite (g,HIGH);
 delay (temps);
 //I
 digitalWrite (a,LOW);
 digitalWrite (b,LOW);
 digitalWrite (c,LOW);
 digitalWrite (d,LOW);
 digitalWrite (e,HIGH);
 digitalWrite (f,HIGH);
 digitalWrite (g,LOW);
 delay (temps);
 //E
 digitalWrite (a,HIGH);
 digitalWrite (b,LOW);
 digitalWrite (c,LOW);
 digitalWrite (d,HIGH);
 digitalWrite (e,HIGH);
 digitalWrite (f,HIGH);
 digitalWrite (g,HIGH);
 delay (temps);
 //L
 digitalWrite (a,LOW);
 digitalWrite (b,LOW);
 digitalWrite (c,LOW);
 digitalWrite (d,HIGH);
 digitalWrite (e,HIGH);
 digitalWrite (f,HIGH);
 digitalWrite (g,LOW);
 delay (temps);
 


 
}






//************************* FUNCIONS ****************************
