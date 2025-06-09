def calculate_simple_interest(principal, rate, time):
    interest = (principal * rate * time) / 100
    return interest

principal = float(input("Enter principal amount: "))
rate = float(input("Enter rate of interest: "))
time = float(input("Enter time in years: "))

simple_interest = calculate_simple_interest(principal, rate, time)
print("Simple Interest =", simple_interest)
