from timeit import timeit
import os
import subprocess
import resource



def how_long(a: list,  int_what: str, how_many):
    time_elapsed = timeit(lambda:subprocess.run(a, input=str(how_many)+"\n", text=True, capture_output=True), number=1)
    peak_memory_usage_kb = resource.getrusage(resource.RUSAGE_CHILDREN).ru_maxrss
    print(f"time elapesed in {int_what}, is: {time_elapsed:.6f} seconds, memory used {peak_memory_usage_kb/1024} MB")


if __name__ == "__main__":
    how_long(a = ["./count"], int_what = "C", how_many=1000000000)
    how_long(a= ["lua", "count.lua"], int_what="lua", how_many=10000000)
    how_long(a= ["python3", "count.py"], int_what="Python", how_many=10000000)

