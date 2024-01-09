#!/usr/bin/python3
def multiple_returns(sentence):
    updated_tuple = ()
    l_s = len(sentence)

    if l_s == 0:
        updated_tuple = 0, "None"
    else:
        updated_tuple = l_s, sentence[0]
    return updated_tuple
