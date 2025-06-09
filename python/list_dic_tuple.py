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

copied_list = my_list.copy()
print("Copied list:", copied_list)

temp_list = [1, 2, 3]
temp_list.clear()
print("After clear():", temp_list)


print("\n=== Dictionary Methods ===")
my_dict = {
    "name": "Alice",
    "age": 25,
    "city": "New York"
}

print("get('name'):", my_dict.get("name"))

print("keys():", list(my_dict.keys()))

print("values():", list(my_dict.values()))

print("items():", list(my_dict.items()))

my_dict.update({"age": 26, "email": "alice@example.com"})
print("After update():", my_dict)

removed = my_dict.pop("city")
print("After pop('city'):", my_dict, "| Removed:", removed)

last_item = my_dict.popitem()
print("After popitem():", my_dict, "| Last Item:", last_item)

default_value = my_dict.setdefault("country", "USA")
print("After setdefault('country', 'USA'):", my_dict)

temp_dict = {"a": 1}
temp_dict.clear()
print("After clear():", temp_dict)

print("\n=== Tuple Methods ===")
my_tuple = (10, 20, 30, 20, 40, 20)

count_20 = my_tuple.count(20)
print("Count of 20:", count_20)

index_30 = my_tuple.index(30)
print("Index of 30:", index_30)
