#include <iostream.h>
#include <conio.h>
#include <stdlib.h>
#include <dos.h>
char z='\n';
int main()
{   sound(246.9);
    delay(200);
    nosound();
    delay(200);
     //2
    sound(370);
    delay(200);
   //3
    sound(246.9);
    delay(200);
    //4
    sound(392);
    delay(200);

   nosound();
   delay(200);

    //5
    sound(370);
    delay(200);
    //6
    sound(329.6);
    delay(200);
    //7
    sound(370);
    delay(200);
    nosound();
   delay(200);

   //8
   sound(329.6);
    delay(200);
    //9
    sound(370);
    delay(200);
    //10
    sound(392);  ///bugs
    delay(100);
    nosound();
    delay(100);
   //11
    sound(392);
    delay(200);
  //12
   sound(370);
    delay(200);
   //13
    sound(329.6);
    delay(200);
    //14
    sound(246.9);
    delay(200);
	nosound();
   delay(200);

    //15
     sound(370);
    delay(200);
       //16
      sound(246.9);
    delay(200);
	   //17
       sound(392);
    delay(200);
    nosound();
   delay(200);

	   //18
     sound(370);
    delay(200);
	       //19
       sound(329.6);
    delay(200);
		   //20
	sound(293.7);
    delay(200);
    nosound();
   delay(200);

	   //21
      sound(329.6);
    delay(200);
	  //22
      sound(293.7);
    delay(200);
	  //23
	sound(277.2);
    delay(100);
	     nosound();
	     delay(100);
	  sound(277.2);
    delay(200);

	   sound(293.7);
    delay(200);

	  sound(277.2);
    delay(200);

      sound(246.9);
    delay(200);


     nosound();
   getch();

return 1;
}
