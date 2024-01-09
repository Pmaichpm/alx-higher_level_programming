#!/usr/bin/python3
def no_c(my_string):
    l = len(my_string)

    x = 0

    new_string = my_string[:]

    for i in range(l):
        if (my_string[i] == 'c' or my_string[i] == 'C'):
            new_string = new_string[:(i - x)] + my_string[(i + 1):]
            x += 1

    return (new_string)
