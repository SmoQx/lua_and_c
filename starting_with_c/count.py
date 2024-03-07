

def add_two(a: int, b: int):
    return a + b


def main(a: int):
    for i in range(a):
        add_two(1, 1)
        if (i == a - 1):
            print(i)


if __name__ == "__main__":
    num = input("")
    main(int(num))

