numbers = [10, 15, 20, 25, 30]

mean = sum(numbers) / len(numbers)

deviations = []
for num in numbers:
    deviations.append(abs(num - mean))

mean_deviation = sum(deviations) / len(deviations)

print("The mean deviation of the numbers is:", mean_deviation)

numbers = input("Enter a list of numbers separated by spaces: ").split()

numbers = [float(num) for num in numbers]

mean = sum(numbers) / len(numbers)

deviations = []
for num in numbers:
    deviations.append(abs(num - mean))

mean_deviation = sum(deviations) / len(deviations)

print("The mean deviation of the numbers is:", mean_deviation)
