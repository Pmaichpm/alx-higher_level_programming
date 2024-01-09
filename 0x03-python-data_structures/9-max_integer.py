#!/usr/bin/python3
def max_integer(my_list=[]):
    l_list = len(my_list)

    if l_list == 0:
        return (None)

    max_list = my_list[0]

    for i in range(1, l_list):
        if my_list[i] > max_list:
            max_list = my_list[i]

    return (max_list)
