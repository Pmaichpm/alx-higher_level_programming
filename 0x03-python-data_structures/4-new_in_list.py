#!/usr/bin/python3
def new_in_list(my_list, idx, element):
    xl = len(my_list)

    copy_list = my_list[:]

    if 0 <= idx < xl:
        copy_list[idx] = element

    return (copy_list)
