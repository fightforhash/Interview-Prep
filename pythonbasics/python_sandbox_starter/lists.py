# A List is a collection which is ordered and changeable. Allows duplicate members.

# Create List
numbers = [1,2,3,4,5]
fruits = ['Apples', 'Oranges', 'Grapes', 'Pears']

#Use a constructor 
#numbers2 = list((1,2,3,4,5))

#Get a value
print(fruits[1])

print(len(fruits))

#Append to list
fruits.append('Mangos')

#remove from list
fruits.remove('Grapes')

#Insert into positioon
fruits.insert(2, "Strawberries")

fruits.pop(1)

#Reverse list
fruits.reverse()

#Sort list
fruits.sort()

# Reverse sort
fruits.sort(reverse=True)

#Change value 
fruits[0] = "sex"
print(fruits)