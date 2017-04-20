





     unsigned char readbuffer[64]  absolute 0x500 ;
     unsigned char writebuffer[64] absolute 0x540 ;

        char count;

        void interrupt()
        {
        USB_Interrupt_Proc();
        }




void main() {

   ADCON1=0x0F;
   CMCON=7;


   HID_Enable(&readbuffer,&writebuffer);
   delay_ms(200);
   
    while(1){



    }

}
