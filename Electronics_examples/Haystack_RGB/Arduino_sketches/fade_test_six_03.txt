
int red = 3;
int green = 5;
int blue = 6;

int red_val = 0;
int green_val = 0;
int blue_val = 0;

int red2 = 9;
int green2 = 10;
int blue2 = 11;

int red_val2 = 0;
int green_val2 = 0;
int blue_val2 = 0;



int power[20] = {0,0,1,1,1,2,3,4,5,8,10,16,25,32,50,64,100,128,200,255};
int increment[12][3] = {
    {0, 0, 1},
    {0, 1, -1},
    {0, 0, 1},
    {0, -1, -1},
    {1, 0, 0},
    {0, 0, 1},
    {-1, 0, -1},
    {1, 1, 0},
    {0, -1, 0},
    {-1, 0, 0},
    {1, 1, 1},
    {-1, -1, -1}
};

void setup() {
  Serial.begin(9600);
}

void loop() {
for(int j=0; j<12; j++){
  
  for(int i=0; i<20; i++){   
    red_val += increment[j][0];
    green_val +=  increment[j][1];
    blue_val +=  increment[j][2];
    red_val2 +=  increment[j][2];      //permute colors relative to first set.
    green_val2 +=  increment[j][0];
    blue_val2 +=  increment[j][1];
    
    Serial.print("j=  ");
    Serial.print(j);
    Serial.print("   ");
    Serial.print(power[red_val]);
    Serial.print("   ");
    Serial.print(power[green_val]);
    Serial.print("   ");
    Serial.println(power[blue_val]);
    analogWrite(red, 255 - power[red_val]);
    analogWrite(green, 255 - power[green_val]);
    analogWrite(blue, 255 - power[blue_val]);
    analogWrite(red2, 255 - power[red_val2]);
    analogWrite(green2, 255 - power[green_val2]);
    analogWrite(blue2, 255 - power[blue_val2]);
    delay(1000);
    }
  }

 
 

}
