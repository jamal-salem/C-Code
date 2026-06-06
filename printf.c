//printf for hello world 


#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("hello, world\n");
    printf("hello\nworld\n");
    printf("hello\"world\n");

    return 0;
}


// printf for number ( %d )  , for text ( %s ) , for flot ( %f ) , for single character ( %c )

#include <stdio.h>
#include <stdlib.h>

int main()
{
   printf("%d\n", 500);

   printf("My favorite number is %d\n", 500);

   printf("My favorite %s is %d\n", "number", 500);

   printf("My favorite %s is %f\n", "number", 500.524);

    return 0;
}


// to doing variable for ( int ) 




#include <stdio.h>
#include <stdlib.h>

int main()
{
    int favNum = 90;
    char myChar = 'i';

    printf("My favorite %c is %f\n", myChar ,favNum);




    return 0;
}








