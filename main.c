//
//  main.c
//  meth
//
/*Author: <Marvens Luc>
Date: <4/25/22>
Purpose: <This program shows how the collatz junction>
Time Spent: < 2 days the struggle is real lol>
*/

#include <stdio.h>
void row(int st, int end);
int math(int st, int end);
void clear_keyboard_buffer(void);

int main(int argc, const char * argv[]) {
    printf("give me a starting number thats greater then 1 less then 1000");
    int starting; // starting variable
    scanf("%d",&starting);
    clear_keyboard_buffer();
    while(starting <= 1 || starting >= 1000) // it checks the condition for starting
    {
        printf("give me a starting number thats greater then 1 less then 1000");
        scanf("%d",&starting);
        clear_keyboard_buffer();
        
    }
    
    printf("give me a ending number thats greater then the starting  less then 10,000");
    int ending; // ending variable
    scanf("%d",&ending);
    clear_keyboard_buffer();
    while(ending >= 10000 || ending <= starting) // it checks the condition for ending
    {
        printf("give me a starting number thats greater then 1 less then 1000");
        scanf("%d",&ending);
        clear_keyboard_buffer();
    }
    
   math(starting, ending);
        
   return 0;

    }


int math(int st, int ending) {

int count = 0; // this variable counts how many times the for loop increment
int number = st; // this variable is made to make sure starting does go beyond ending
int placeholder; // i made this variable to store the value, when the math happens
int i;
    
while (number <= ending) // while loop make sure starting doesn't surpass ending
        {
            
            for (i = 0; i < 7; i++) // the for loop creates the rows
            {
                placeholder = number;
                
                while (placeholder != 1){ /* this basical continue divide the individual number until it reaches one for example if place holder is 3 it will go through the if statments to decide wheather 3 is even or odd and do the math. then since 3 is odd it will do the math and compare the new number to the while loop*/
                    
                    for(count = 0; placeholder > 1; count++){ /* this for loop counts how many time a signle number is divid by 2 or multiply by 3 */
                        
                    if (placeholder % 2 == 0){ // checks if even
                       placeholder =  placeholder / 2;
                    }
                    
                    
                    else if (placeholder % 2 == 1){
                        placeholder = (placeholder * 3) + 1; // odd
                    }
               }
              }
                
                printf("%5d:%-5d", number, count); // makes the number next to each other align
                number+=1; // iterates the next number
            }
            printf("\n"); // starts the next row
        }
           
    return 0;
    
}


void clear_keyboard_buffer(void)
{
    char c;
    scanf("%c", &c);
    while (c != '\n')
    {
        scanf("%c", &c);
    }
}

