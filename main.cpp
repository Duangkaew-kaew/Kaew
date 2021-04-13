#include <cstdio>
#include <cstdlib>

//
// Alias'
//

#define warn printf
#define error printf

//
// User Interface Strings
//

const char * start_header_message = 
    "B A N K  S O F T\n\n";

const char * main_menu = 
    "1. Create Account\n"
    "2. Manage Account\n"
    "3. Preferences\n";

//
// Function Declarations
//

bool isCharNumeric(char c);
char getChar();

int main(int argc, char *argv[])
{
    printf(start_header_message);
    bool is_running = true;

    while(is_running)
    {
        printf(main_menu);
        char user_input = getChar();

        // Handle common option 'q' to quit
        if('q' == user_input)
        {
            is_running = false;
        }
        else if(isCharNumeric(user_input))
        {
            const int user_option = user_input - '0';
            switch(user_option)
            {
                case 1:
                    // Handle 'Create Account'
                    break;
                case 2:
                    // Handle 'Manage Account'
                    break;
                case 3:
                    // Handle 'Preferences'
                    break;
                default:
                    warn("Invalid option '%d'\n", user_option);
            }
        }
        else 
        {
            warn("Invalid input '%c'\n", user_input);
        }
    }

    return 0;
}

// 
// Returns the first character from standard input (keyboard) and clears left over characters in buffer
// getchar(), etc are not suitable for this as there is no portable way to clear stdin
//
char getChar()
{
    char input_buffer[80];
    if(nullptr == fgets(input_buffer, 80, stdin))
    {
        //
        // This should never be reached as fgets will block for stdin 
        //

        error("Failed to get user input!\n");
        exit(1);
    }

    return input_buffer[0];
}

//
// Returns true if given charactor can be represented as a number (I.e 0 - 9)
//
bool isCharNumeric(char c)
{
    return c >= '0' && c <= '9';
}