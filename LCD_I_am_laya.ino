#include <LiquidCrystal.h>
LiquidCrystal dot_matrix(12,11,5,4,3,2);
#These are the are the matrix numbers that will glow.

void setup() {
dot_matrix.begin(16,4);
#This is where the cursor starts to type the first letter. 
}

void loop() {
dot_matrix.print("I am laya") ;
delay (1000);
dot_matrix.clear();
delay (1000);
}      
