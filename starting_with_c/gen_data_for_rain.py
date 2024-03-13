import random


def main():
    rand_tabel = []
    inner_table = []
    for x in range(5):
        for y in range(12):
            inner_table[y] = random.randint(1, 100)
        rand_tabel.append(inner_table)
    return rand_tabel


if __name__ == "__main__":
    print(main())
