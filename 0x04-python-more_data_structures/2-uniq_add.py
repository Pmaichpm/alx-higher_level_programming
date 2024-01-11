#!/usr/bin/python3
def uniq_add(my_list=[]):
    special_list = set(my_list)
    sum = 0
    for digit in special_list:
        sum += digit
    return sum
