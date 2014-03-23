/*  printf example  Oct Dec Hex  Binary Operator: c = a&&b , c= a||b c = a^b << >> */
#include <stdio.h>
#include<iostream>
using std::cout;
using std::endl;

int main ()
{
   unsigned int a( 17 );//17oct = 15dec
   unsigned int b( 036 );//36oct = 30dec
   unsigned int c( 0 );
   unsigned const int n( 5 );
    printf( "Вхідні дані у вісімковій сис. числення: %o oct, %o oct \n",a,b );
    printf( "Вхідні дані у десятковій сис. числення: %d dec, %d dec \n",a,b );
    printf( "Вхідні дані у шістнадцятковій сис. числення: %X hex, %X hex \n",a,b );



            c = a & b;
            printf( "Результат а && b : %o oct \n",c );
            printf( "Результат а && b : %d dec \n",c );
            printf( "Результат а && b : %X hex \n\n",c );

            c = ( a | b );
            printf( "Результат а || b : %o oct \n",c );
            printf( "Результат а || b : %d dec \n",c );
            printf( "Результат а || b : %X hex \n\n",c );

            c = a ^ b;
            printf( "Результат а ^ b : %o oct\n", c );
            printf( "Результат а ^ b : %d dec \n", c );
            printf( "Результат а ^ b : %X hex\n\n", c );
		
		//Символ під номером 119 - перевірка кодів
                printf( "Hello символ під номером 119 %c\n", 119 );
                c = ~ b;
                printf( "Результат ~a : %o oct\n", c );
                printf( "Результат ~а : %u dec \n", c );// = Подрійбний був специфікатор тільки беззнакови чисел %u
                printf( "Результат ~а : %X hex\n\n", c );

                    cout << "Total on oct а << n: " << std::oct << c << endl;
                    cout << "Total on dec а << n: " << std::dec << c << endl;
                    cout << "Total on hex а << n: " << std::hex << c << endl;


		// Зсув числа вправо на 5 розрядів

                c = a >> n;
                printf( "Результат а >> 5 : %o oct\n", c );
                printf( "Результат а >> 5 : %d dec \n", c );
                printf( "Результат а >> 5 : %X hex\n\n", c );
		
		// Зсув числа уліво на 5 розрядів

                    c = a << n;
                    printf( "Результат а << 5 : %o oct\n", c );
                    printf( "Результат а << 5 : %d dec \n", c );
                    printf( "Результат а << 5 : %X hex\n\n", c );
 //Перевіряв вивід через ostream(USING STD::COUT) вивід здійснюється аналогічно....:
                cout << "Total on oct а << n: " << std::oct << c << endl;
                cout << "Total on dec а << n: " << std::dec << c << endl;
                cout << "Total on hex а << n: " << std::hex << c << endl;

                return 0;
}
