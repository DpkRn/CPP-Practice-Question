import os

def fun(cnt):
    if(cnt>10000):
        return
    for i in range(0,10000):
        os.mkdir(f"fd{i}")
        os.chdir(f"fd{i}")
        print(os.getcwd())
        fun(cnt+1)
        os.chdir('..')
fun(0)

