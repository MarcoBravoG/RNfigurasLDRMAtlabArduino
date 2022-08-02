#include "math.h"  
#include <Wire.h> 
#include <LiquidCrystal_I2C.h>
//Crear el objeto lcd  dirección  0x3F y 16 columnas x 2 filas
LiquidCrystal_I2C lcd(0x27,16,2);  //

//ENTRADAS SENSORES
int s0 = A0;   
int s1 = A1;   
int s2 = A2;   
int s3 = A3;   
int s4 = A4;   
int s5 = A5;   
int s6 = A6;   
int s7 = A7;   
int s8 = A8;   
int s9 = A9;   
int s10 = A10;   
int s11 = A11;   


 
int p1 = 0;   
int p2 = 0;   
int p3 = 0;   
int p4 = 0;   
int p5 = 0;   
int p6 = 0;   
int p7 = 0;   
int p8 = 0;   
int p9 = 0;   
int p10 = 0;   
int p11 = 0;   
int p12 = 0;   

float n1 , n2 , n3, n4, n5, n6, n7, n8 , n9, n10 , n11, n12,n13,n14,n15; // variables de las salidas de las neuronas
float a1 , a2 , a3, a4, a5, a6, a7, a8 , a9, a10 , a11, a12 ; // las salidas de las funciones de activacion 
float e=2.7182818 ; // Definimos e para trabjar con la tanjente hiperbolica


void setup() { 
   
   pinMode (s0 , INPUT);
   pinMode (s1 , INPUT);
   pinMode (s2 , INPUT);
   pinMode (s3 , INPUT);
   pinMode (s4 , INPUT);
   pinMode (s5 , INPUT);
   pinMode (s6 , INPUT);
   pinMode (s7 , INPUT);
   pinMode (s8 , INPUT);
   pinMode (s9 , INPUT);
   pinMode (s10 , INPUT);
   pinMode (s11 , INPUT);
   Serial.begin(9600);
   lcd.print("Hola Mundo");
  
  }

  
void loop()
{
   p1 = analogRead(s0);
   p2 = analogRead(s1);
   p3 = analogRead(s2);
   p4 = analogRead(s3);
   p5 = analogRead(s4);
   p6 = analogRead(s5);
   p7 = analogRead(s6);
   p8 = analogRead(s7);
   p9 = analogRead(s8);
   p10 = analogRead(s9);
   p11 = analogRead(s10);
   p12 = analogRead(s11);


   
   
 
   Serial.print(p1);
   Serial.print(" ");
   Serial.print(p2);
   Serial.print(" ");
   Serial.print(p3);
   Serial.print(" ");
   Serial.print(p4);
   Serial.print(" ");
   Serial.print(p5);
   Serial.print(" ");
   Serial.print(p6);
   Serial.print(" ");
   Serial.print(p7);
   Serial.print(" ");
   Serial.print(p8);
   Serial.print(" ");
   Serial.print(p9);
   Serial.print(" ");
   Serial.print(p10);
   Serial.print(" ");
   Serial.print(p11);
   Serial.print(" ");
   Serial.print(p12);
   Serial.println(" ");


   // definimos la sumatoria de nuestra neurona

n1= p1 * (0.0003) + p2 * (0.0005) + p3 * (0.0018) + p4 * (0.0008) + p5 * (-0.0008) + p6* (-0.0014) + p7 * (-0.0023) + p8 * (0.0020) + p9 * (0.0033) + p10 * (-0.0006) + p11 * (0.0001) + p12 * (-0.0003) + (-4.3898) ;
n2= p1 * (0.0025 ) + p2 * (0.0013) + p3 * (0.0032 ) + p4 * (-0.0033) + p5 * (-0.0014) + p6* (-0.0008) + p7 * (-0.0001) + p8 * (-0.0039) + p9 * (0.0022) + p10 * (0.0003) + p11 * (0.0044) + p12 * (-0.0038) + (-1.6034) ;
n3= p1 * (-0.0024) + p2 * (0.0025) + p3 * (0.0035) + p4 * (0.0036) + p5 * (0.0006) + p6* (-0.0008) + p7 * (-0.0007) + p8 * (-0.0009 ) + p9 * (0.0013) + p10 * (0.0007) + p11 * (0.0007) + p12 * (-0.0006) + (-4.2599) ;
n4= p1 * (-0.0015) + p2 * (0.0015) + p3 * (-0.0014) + p4 * (0.0064) + p5 * (-0.0020) + p6* (0.0011) + p7 * (-0.0045 ) + p8 * (-0.0030) + p9 * (0.0045) + p10 * (0.0038) + p11 * (0.0021) + p12 * (-0.0005) + (-0.0802) ;
n5= p1 * (-0.0001) + p2 * (0.0019) + p3 * (0.0012) + p4 * (0.0006) + p5 * (-0.0004) + p6* (-0.0028) + p7 * (0.0029) + p8 * (-0.0029) + p9 * (-0.0023) + p10 * (0.0046) + p11 * (0.0016) + p12 * (-0.0016) + (-0.4693) ;
n6= p1 * (-0.0010) + p2 * (-0.0005) + p3 * (-0.0012) + p4 * (0.0017) + p5 * (-0.0003) + p6* (-0.0029) + p7 * (-0.0010) + p8 * (-0.0014) + p9 * (-0.0006) + p10 * (0.0011) + p11 * (-0.0011) + p12 * (0.0007) + (-2.2345) ;
n7= p1 * (0.0015) + p2 * (-0.0049) + p3 * (0.0038) + p4 * (-0.0033) + p5 * (0.0017) + p6* (0.0027) + p7 * (0.0014) + p8 * (-0.0010) + p9 * (-0.0050 ) + p10 * (-0.0009) + p11 * (0.0049) + p12 * (-0.0006) + (-1.1653) ;
n8= p1 * (-0.0075) + p2 * (-0.0067) + p3 * (0.0027) + p4 * (-0.0068) + p5 * (-0.0025 ) + p6* (0.0021) + p7 * (0.0034) + p8 * (0.0025) + p9 * (0.0072) + p10 * (-0.0055) + p11 * (-0.0005) + p12 * (-0.0044) + (2.5014) ;
n9= p1 * (0.0045) + p2 * (0.0016) + p3 * (0.0000) + p4 * (-0.0026) + p5 * (0.0028) + p6* (-0.0016) + p7 * (-0.0009) + p8 * (-0.0007) + p9 * (-0.0006) + p10 * (-0.0025) + p11 * (-0.0009) + p12 * (-0.0015) + (-2.1101) ;
n10= p1 * (0.0005) + p2 * (0.0016) + p3 * (0.0036) + p4 * (0.0018) + p5 * (0.0029) + p6* (-0.0002) + p7 * (0.0036) + p8 * (0.0004) + p9 * (0.0003) + p10 * (0.0037) + p11 * (0.0023) + p12 * (0.0019) + (-1.4202) ;
n11= p1 * (0.0013) + p2 * (0.0001) + p3 * (0.0012) + p4 * (0.0002) + p5 * (-0.0003) + p6* (0.0002) + p7 * (0.0006) + p8 * (-0.0024) + p9 * (0.0016) + p10 * (-0.0007) + p11 * (-0.0010) + p12 * (0.0010) + (-3.5385) ;
n12= p1 * (-0.0025) + p2 * (-0.0027) + p3 * (-0.0018 ) + p4 * (-0.0050) + p5 * (-0.0021) + p6* (-0.0029) + p7 * (-0.0002) + p8 * (0.0035) + p9 * (-0.0057) + p10 * (0.0002) + p11 * (-0.0015) + p12 * (0.0029) + (0.5888) ;

   a1 = tansig ( n1 ) ; 
   a2 = tansig ( n2 );
   a3 = tansig ( n3 );
   a4 = tansig ( n4);
   a5 = tansig ( n5);
   a6 = tansig ( n6);
   a7 = tansig ( n7);
   a8 = tansig ( n8);
   a9 = tansig ( n9);
   a10 = tansig ( n10);
   a11 = tansig ( n11);
   a12 = tansig ( n12);
   
n13 = a1 *(-0.1396) + a2 *(0.5684) + a3 *(-0.2203) + a4 *(-0.8993) + a5 *(-0.9686) + a6 *(0.3379) + a7 *(0.1434) + a8 *(0.1993) + a9 *(-0.6952)+ a10 *(0.6646)+ a11 *(0.7276) + a12 *(-0.7840) + (0.1189) ;
n14 = a1 *(0.3874) + a2 *(0.4109) + a3 *(0.1817) + a4 *(-0.5427) + a5 *(0.7274) + a6 *(0.0004) + a7 *(-0.7556) + a8 *(-0.8880) + a9 *(-0.9608)+ a10 *(0.2348)+ a11 *(-0.8047) + a12 *(0.0340) + (-0.9908) ;
n15 = a1 *(0.8903) + a2 *(-0.7815) + a3 *(-0.0814) + a4 *(0.6685) + a5 *(-0.8437) + a6 *(-0.5642) + a7 *(0.3424) + a8 *(-0.8870) + a9 *(-0.1298 )+ a10 *(0.0404)+ a11 *(0.8159) + a12 *(-0.7139) + (0.5335) ;

n13=round(n13); //redondeamos para que no salga - negativos
n14=round(n14); //redondeamos para que no salga – negativos
n15=round(n15); //redondeamos para que no salga - negativos

Serial.println(n13);
Serial.println(n14);
Serial.println(n15);

if(n13==1)
{
  Serial.println("cuadrado");
   lcd.print("cuadrado");
}

if(n14==1)
{
  Serial.println("circulo");
  lcd.print("circulo");
}

if(n15==1)
{
  Serial.println("triangulo");
  lcd.print("trinagulo");
}
   delay(5000);
   }


   // definimos la funcion tangente hiperbolica
// funcion tansig
float tansig ( float x ) { 
  float a ; 
  
  a = ( pow ( e , x ) -pow ( e , -x ) ) / ( pow ( e , x ) + pow ( e , -x ) ) ; 
  return a ; // regreseamos el valor de a
  }
