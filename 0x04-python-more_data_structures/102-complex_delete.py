#!/usr/bin/python3
def complex_delete(a_dictionary, value):
    while value in a_dictionary.values():
for lead, use in sorted(a_dictionary.items()):
        if use == value:
            del a_dictionary[lead]
    return a_dictionary
