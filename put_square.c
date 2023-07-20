#include <unistd.h>

void put_line(int size_line, char caratere1, char caratere2, char caratere3) {
    int start_position;

    start_position = 2;
    write(1, &caratere1, 1);
    while (start_position < size_line)
    {
        //caratere1++ ;
        write(1, &caratere2, 1);
        start_position++;
    }
    write(1, &caratere3, 1);
    write(1, "\n", 1);
}

void put_firs_and_last_line(int size_line,char caratere1, char caratere2)
{
    int start_position;

    start_position = 0;
    while (start_position < size_line / 2)
    {
        write(1, &caratere1, 1);
        write(1, &caratere2, 1);
        start_position++;
    }
    write(1, "\n", 1);
}
void put_square(int size)
{
    int start_position;

    start_position = 1;
    put_firs_and_last_line(size, 'a', 'b');
    while(start_position < size / 2)
    {
        put_line(size, 'b', ' ', 'a');
        put_line(size, 'a', ' ', 'b');

        start_position++;
    }
    put_firs_and_last_line(size, 'b', 'a');
}
