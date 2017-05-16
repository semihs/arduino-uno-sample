const int LedListesi[] = {2,3,4,5,6,7,8,9};

void setup () {     
  for(int i=0; i<7 ;i++)    
  {
    pinMode(LedListesi[i], OUTPUT);
  }
}

void loop()
{
  for(int i=0; i<7 ;i++)    
  {
    digitalWrite(LedListesi[i], HIGH);
    delay(1000);
    digitalWrite(LedListesi[i], LOW);
  }


  for(int i=7; i>=0 ;i--)    
  {
    digitalWrite(LedListesi[i], HIGH);
    delay(1000);
    digitalWrite(LedListesi[i], LOW);
  }

  for (int i=0; i<=100; i++) {
    int rnd = random(0, 7);
    digitalWrite(LedListesi[rnd], HIGH);
    delay(100);
    digitalWrite(LedListesi[rnd], LOW);
  }

  for(int i=7; i>=4 ;i--)    
  {
    int tersi = abs(i - 7);
    digitalWrite(LedListesi[i], HIGH);
    digitalWrite(LedListesi[tersi], HIGH);
    
    delay(1000);
    
    digitalWrite(LedListesi[i], LOW);
    digitalWrite(LedListesi[tersi], LOW);

    delay(1000);
  }
}
