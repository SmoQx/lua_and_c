import numpy as np


def main():
    rand_tabel = np.random.rand(5, 12)
    print(rand_tabel)
    return rand_tabel


if __name__ == "__main__":
    with open('tekst.txt', 'w') as save_the_data:
        array_strin = str(main()).replace("[", "{")
        array_strin = array_strin.replace("]", "},")
        array_strin = array_strin.replace(" ", ", ")
        save_the_data.write(array_strin)
