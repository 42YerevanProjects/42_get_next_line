# 42_get_next_line

Function name ... get_next_line

Prototype ... int get_next_line(int fd, char **line);

Parameters ... #1. file descriptor for reading
               #2. The value of what has been read
               
Return value ... 1 : A line has been read
                 0 : EOF has been reached
                -1 : An error happened

Description

• A function which returns a line read from a file descriptor, without the newline. (without bonuses)

• The program must compile with the flag -D BUFFER_SIZE=xx. which will be used
as the buffer size for the read calls in your get_next_line.

• Compilation will be done this way : gcc -Wall -Wextra -Werror -D BUFFER_SIZE=32
get_next_line.c get_next_line_utils.c

