#include <iostream>

void noise(char *argv)
{
    for (int i = 0; argv[i]; i++)
        std::cout << (char)toupper(argv[i]);
}


int main(int argc, char **argv)
{
    if (argc < 2)
    {
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
        return (0);
    }
    else
    {
        for (int i = 1; argv[i]; i++)
            noise(argv[i]);
        std::cout << std::endl;
    }
}
