const int L_VIBE = 9;const int R_VIBE = 7;void setup() {  pinMode(L_VIBE, OUTPUT);  pinMode(R_VIBE, OUTPUT);}void loop() {  for(int i = 0; i < 32; i++) {    analogWrite( L_VIBE, 255 - (i * 8) );    delay( 20 + i * 50 );    analogWrite( L_VIBE, 0 );    analogWrite( R_VIBE, 255 - (i * 8) );    delay( 20 + i * 50 );    analogWrite( R_VIBE, 0 );  }}