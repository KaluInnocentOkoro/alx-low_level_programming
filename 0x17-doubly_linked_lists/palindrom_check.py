#!/usr/bin/python3
def check_palindrome():
    max_no = 0
    for i in range(100, 1000):
        for j in range(100, 1000):
            mul = i * j
            if str(mul) == str(mul)[::-1]:
                if mul > max_no:
                    max_no = mul
    return max_no

print(check_palindrome())
