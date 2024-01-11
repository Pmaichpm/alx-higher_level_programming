#!/usr/bin/python3
def square_matrix_simple(matrix=[]):
    formed = matrix.copy()

    for i in range(len(matrix)):
        formed[i] = list(map(lambda x: x**2, matrix[i]))

    return (formed)
