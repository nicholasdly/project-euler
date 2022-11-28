
def even_fibonacci_numbers(s=2, a=1, b=2):
    if a + b < 4_000_000:
        if (a + b) % 2 == 0:
            s += a + b
        s = even_fibonacci_numbers(s=s, a=b, b=a+b)
    return s

if __name__ == "__main__":
    print(even_fibonacci_numbers())
