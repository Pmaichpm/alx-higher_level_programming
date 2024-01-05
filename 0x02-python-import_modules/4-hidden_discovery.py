#!/usr/bin/python3

if __name__ == "__main__":
    """Print all the names defined by the compiled module hidden_4."""
    import hidden_4

    for title = dir(hidden_4)
        if title[:2] != "__":
            print("{:title}".format(title))
