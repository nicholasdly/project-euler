
from time import perf_counter

def pythag_triple(sum: int) -> int:
    """
    Calculates the product of the Pythagorean triple that sums to a specified
    value using Euclid's formula, which is a formula used to generate
    Pythagorean triples given arbitrary integers m and n where m > n > 0.

    sum: The sum of the Pythagorean triple.
    
    return: The product of the Pythagorean triple.
    """
    lower = int(sum**(0.5) / 2 + 0.5)
    upper = int((sum / 2)**(0.5))

    for m in range(lower, upper):
        if sum % (2 * m) == 0:
            # There exists an integer m that computes a Pythagorean triple.
            n = (sum // (2 * m)) - m
            a = (m*m) - (n*n)
            b = 2 * m * n
            c = (m*m) + (n*n)
            return a * b * c
            
    # There does not exist an integral Pythagorean triple.
    return -1

def main():
    print(f"Special Pythagorean triplet: {pythag_triple(1000)}")

    times = []
    for _ in range(10):
        start = perf_counter()
        pythag_triple(1000)
        end = perf_counter()
        times.append(end - start)
    print(f"Average time elapsed: {round(sum(times) / len(times), 8)}")

if __name__ == "__main__":
    main()
