def factorial(k):
    multiply=1;
    for j in range(k):
        multiply=multiply*(k-j);
    return multiply
print("70!=",factorial(70),".")
