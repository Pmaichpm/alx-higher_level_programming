#!/usr/bin/python3
"""Defines a text-indentation module."""

def text_indentation(text):
    """splits a text into lines along "?", ":", "." followed by 2 new lines"""
    if type(text) is not str:
        raise TypeError("text must be a string")
    red = 0
    for a in text:
        if red == 0:
            if a == ' ':
                continue
            else:
                red = 1
        if red == 1:
            if a == '?' or a == '.' or a == ':':
                print(a)
                print()
                red = 0
            else:
                print(a, end="")
