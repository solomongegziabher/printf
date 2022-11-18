#include<stdio.h>
#include<stdarg.h>
 void _printf(const char *format, ...);
int main()
{



//printf("this one %c","cis a letter");


 printf("\%c",'c');
_printf("\%c",'c');

//_printf("solomon%s");
 return 0;

}

void _printf(const char *format, ...)
{
        
        va_list arg;
        int last, count,stringcount;
        char *string_val, *separator,*space = " ";
        
        va_start(arg, format);
        stringcount = count = 0;
        separator = ", ";

//    // printf("i am here %c\n",va_arg(arg,int));
//     printf("i am here %c\n",va_arg(arg,int));
//     printf("i am here %c\n",va_arg(arg,int));


           // va_arg(arg,char);

        while (format[count] != '\0')
        {
                
                //printf("%c",format[count]);
                
                if(format[count] != ' ')
                {
                    stringcount++;
                }
                 if(format[count] == '%' && format[count+1] == 'c' )
                {
                     stringcount++;

                }
            count++;
        }
       
        va_end(arg);
       printf("\n the numbeR of stirng is %d",stringcount);
        //return last;
}
