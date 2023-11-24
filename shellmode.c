#include <unistd.h>
int main(int argc, char **argv)
{
if (isatty(STDIN_FILENO))
{
// shell is running in interactive mode
// display prompt and accept input from user
}
else
{
//shell is running in non-interactive mode
// execute commands from script or batch file
}
}
