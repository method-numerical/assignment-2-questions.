import timeit

def factorial(k):
    multiply=1;
    for j in range(k):
        multiply=multiply*(k-j);
    return multiply
print("70!=",factorial(70),".")

code="""
def factorial(k):
    multiply=1;
    for j in range(k):
        multiply=multiply*(k-j);
    return multiply
    print(factorial(70))
"""

t=timeit.timeit(code,number=1)
print("time in seconds=",t,".")
