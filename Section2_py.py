def make_multiplier(factor):
    def multiply(x):
        return x * factor
    return multiply

times3 = make_multiplier(3)
times5 = make_multiplier(5)

print(times3(4))  # 12
print(times5(4))  # 20