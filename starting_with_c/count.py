

def add_two(a: int, b: int):
    return a + b


def main():
    for i in range(10000000001):
        add_two(1, 1)
        if (i == 10000000000):
            print(i)


if __name__ == "__main__":
    main()

