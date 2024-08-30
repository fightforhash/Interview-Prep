# A Tuple is a collection which is ordered and unchangeable. Allows duplicate members.
 
# Create Tuple
fruits = ('Apple', 'Oranges', 'Grapes')
#fruits2 = tuple(("Apples", "Oranges", "Grapes"))

#Single value needs trailing comma 
fruits2 = ('Apples',)

print(fruits[1])

#fruits[0] = 'Pears'
del fruits2

print(len(fruits))

# A Set is a collection which is unordered and unindexed. No duplicate members.

#Create set
fruits_set = {"Apples", "Oranges", "Mango"}

#Check if in set
print("Apples" in fruits_set)

#Add to set 
fruits_set.add("Grape")

#Remove from set
fruits_set.remove("Grape")

#clear set
#fruits_set.clear()

#del set
#del fruits_set 

print(fruits_set) 