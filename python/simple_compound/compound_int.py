import math

def calculate_compound_interest(principal, rate, time):
    amount = principal * (math.pow(1 + (rate / 100), time))
    interest = amount - principal
    return interest

principal = float(input("Enter principal amount: "))
rate = float(input("Enter annual interest rate: "))
time = float(input("Enter time in years: "))

compound_interest = calculate_compound_interest(principal, rate, time)
print("Compound Interest =", compound_interest)
