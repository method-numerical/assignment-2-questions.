from scipy.special import factorial
print("70!=",factorial(70),",")

import timeit

code="""
from scipy.special import factorial
y=factorial(70)
"""

t=timeit.timeit(code,number=1);
print("time in seconds=",t,".")
