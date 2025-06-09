import math

n = int(input("Enter the number of data points: "))
numbers = []
for i in range(n):
    num = float(input("Enter data point {}: ".format(i + 1)))
    numbers.append(num)

mean = sum(numbers) / n
variance = sum([(num - mean) ** 2 for num in numbers]) / n
std_deviation = math.sqrt(variance)

print("The standard deviation of the numbers is:", std_deviation)
