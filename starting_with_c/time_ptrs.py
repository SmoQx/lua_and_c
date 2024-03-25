from timeit import timeit
import subprocess
import resource
import os


def how_long(a: list,  int_what: str):
    time_elapsed = timeit(lambda:subprocess.run(a, text=True, capture_output=True), number=1)
    peak_memory_usage_kb = resource.getrusage(resource.RUSAGE_CHILDREN).ru_maxrss
    print(f"time elapesed in {int_what}, is: {time_elapsed:.6f} seconds, memory used {peak_memory_usage_kb/1024} MB")


if __name__ == "__main__":
    how_long(a = ["./pointers_array"], int_what = "C_pointers")
    how_long(a= ["./arrays_arrays"], int_what="C_arrays")
