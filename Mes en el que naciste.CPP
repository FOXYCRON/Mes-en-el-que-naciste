#include<stdio.h>
#include<conio.h>
int num;

main()
	{
   	printf(" Mes en el que naciste \n\n");
      printf("\n\n Escribe el numero del mes en que naciste (del 1 al 12): "); scanf("%d", &num);
      switch(num)
       {

       	case 1: printf("\n Tu naciste en el mes de enero"); break;
         case 2: printf("\n Tu naciste en el mes de febrero"); break;
         case 3: printf("\n Tu naciste en el mes de marzo"); break;
         case 4: printf("\n Tu naciste en el mes de abril"); break;
         case 5: printf("\n Tu naciste en el mes de mayo"); break;
         case 6: printf("\n Tu naciste en el mes de junio"); break;
         case 7: printf("\n Tu naciste en el mes de julio"); break;
         case 8: printf("\n Tu naciste en el mes de agosto"); break;
         case 9: printf("\n Tu naciste en el mes de septiempre"); break;
         case 10: printf("\n Tu naciste en el mes de octubre"); break;
         case 11: printf("\n Tu naciste en el mes de noviembre"); break;
         case 12: printf("\n Tu naciste en el mes de diciembre"); break;


         default: printf("\n\n El numero elegido no es valido");

        } 

        printf("\n\n Autor: Irvin Adrian");

      getch();
     }