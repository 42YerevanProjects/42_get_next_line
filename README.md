# 42 Get Next Line (GNL)

The aim of this project is to make you code a function that **returns a line
ending with a newline, read from a file descriptor.**

This project will not only allow you to add a very convenient function to your collection,
but it will also allow you to learn a highly interesting new concept in C programming: 
**"static variables"**

> ⚠️ **Warning**: Don't copy/paste code you don't understand: it's bad for you, and for the school.

## About the project

### Function Prototype
```c
int	get_next_line(int fd, char **line);
```
Your program must compile with the flag -D **BUFFER_SIZE=xx**, which will be used
as the buffer size for the read calls in your get_next_line.

Make sure that your function behaves well when it reads from a file and when it
reads from the standard input.

### Points to understand in GNL

According to our GNL subject *Calling your function get_next_line in a loop will then allow you to read the 
text available on a file descriptor one line at a time until the EOF*

**get_next_line** function will return an **integer** that will be taken to evaluate all the lines until the
file ends.

### Return value
 | Value | Description         |
 |-----------|----------------------|
 |  1| A line has been read |
 |  0| EOF has been reached |
 |  -1| An error happened |


## Additional info
If you are going to use this file in your 42 project please double check the norms and then validity of the 
subject file. If you want to understand the project better read the [Get_next_line.pdf](Get_next_line.pdf). 
If you find any bugs write an issue.
