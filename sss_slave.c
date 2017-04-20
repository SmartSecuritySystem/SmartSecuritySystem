


     sbit signal at PORTA.B0;

     char keypadport at  PORTB;
     char q   ;


     void send(unsigned char sensor){
       char i  , mask=1 ;

       signal=1;
       delay_us(900);
       for( i=0 ; i<8 ; i++ )
          {
            if(sensor&mask) {  signal=1;  }
            else {signal=0;}

            mask=mask << 1;

            delay_us(394);


          }

        signal=1;
        delay_us(900);
        signal=0;

     }
   struct



void main() {

    TRISA=0;
    PORTA=0;

     keypad_init();


     while(1) {

      q=Keypad_Key_Click();
        if(q>0) send(q);


    delay_ms(100);
                  }









}