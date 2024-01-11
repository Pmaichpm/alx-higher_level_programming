#!/usr/bin/python3
def multiply_by_2(a_dictionary):
    new_dicty = a_dictionary.copy()
    for key, value in a_dictionary.items():
        new_dicty[key] = (value * 2)
    return new_dicty
