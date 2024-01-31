#!/usr/bin/python3
"""LockedClass module."""


class LockedClass:
    """
    Prevent User from creating new LockedClass attributes
    apart from attributes called 'first_name'.
    """

    __slots__ = ["first_name"]
