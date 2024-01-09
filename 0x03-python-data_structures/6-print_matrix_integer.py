#!/usr/bin/python3
def print_matrix_integer(matrix=[[]]):
    for line in matrix:
        for prop in line:
            print("{:d}".format(prop), end=" " if prop != line[-1] else "")
        print()
