#!/usr/bin/python3
def weight_average(my_list=[]):
    if len(my_list) == 0:
        return (0)

    load = 0
    capacity = 0
    for x in my_list:
        load += (x[0] * x[1])
        capacity += (x[1])
    return (load / capacity)
