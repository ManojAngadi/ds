my_list = [10, 20, 30, 40, 50]

my_list.append(60)
print("After append(60):", my_list)

my_list.extend([70, 80])
print("After extend([70, 80]):", my_list)

my_list.insert(2, 25)
print("After insert(2, 25):", my_list)

my_list.remove(40)
print("After remove(40):", my_list)

index_30 = my_list.index(30)
print("Index of 30:", index_30)

count_20 = my_list.count(20)
print("Count of 20:", count_20)

my_list.sort()
print("After sort():", my_list)

my_list.reverse()
print("After reverse():", my_list)

print("\n=== Dictionary Methods ===")
my_dict = {
    "name": "Alice",
    "age": 25,
    "city": "New York"
}
print("Original dictionary:", my_dict)

# Change name to "Sam" and age to 26
my_dict["name"] = "Sam"
my_dict["age"] = 26
print("After changing name and age:", my_dict)

my_dict.update({"age": 30})
print("After update():", my_dict)

print("\n=== Tuple Methods ===")
my_tuple = (10, 20, 30, 20, 40, 20)

count_20 = my_tuple.count(20)
print("Count of 20:", count_20)

index_30 = my_tuple.index(30)
print("Index of 30:", index_30)
