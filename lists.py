>>> zoo = ['bear', 'lion', 'panda', 'zebra']
>>> biggerZoo = ['bear', 'lion', 'panda', 'zebra', ['chimpanzees', 'gorillas', 'orangutans', 'gibbons']]
>>> print(zoo[0])
bear
>>> print(biggerZoo[4])
['chimpanzees', 'gorillas', 'orangutans', 'gibbons']
#slicing
>>> biggerZoo[:2]
['bear', 'lion']
>>> biggerZoo[3:]
['zebra', ['chimpanzees', 'gorillas', 'orangutans', 'gibbons']]
>>> zoo
['bear', 'lion', 'panda', 'zebra']
>>> zoo[:3:2] #start:end:step
['bear', 'panda']
>>> from random import randrange #trying to generate random element from the list
>>> print(biggerZoo[randrange(0,len(biggerZoo))])
lion
>>> print(biggerZoo[randrange(0,len(biggerZoo))])
panda

#trying to convert list of strings into strings
>>> listofstrings=''.join(zoo)
>>> listofstrings
'bearlionpandazebra'
>>> ''.join(biggerZoo)
Traceback (most recent call last):
  File "<stdin>", line 1, in <module>
TypeError: sequence item 4: expected str instance, list found
>>> a=''.join(biggerZoo[-1])
>>> a
'chimpanzeesgorillasorangutansgibbons'
>>> b=''.join(biggerZoo[:3])
>>> b
'bearlionpanda'
>>> a+b
'chimpanzeesgorillasorangutansgibbonsbearlionpanda'
>>> b+a
'bearlionpandachimpanzeesgorillasorangutansgibbons'

#trying to join list of numbers; numbers into string
>>> num=[1,2,3,4,5]
>>> ''.join(str(num))
'[1, 2, 3, 4, 5]'
>>> ''.join(str(n) for n in num)
'12345'

#converting list into tuple
>>> zoo
['bear', 'lion', 'panda', 'zebra']
>>> tuple(zoo)
('bear', 'lion', 'panda', 'zebra')

#list into set
>>> zoo[3]='lion'
>>> zoo
['bear', 'lion', 'panda', 'lion']
>>> set(zoo)
{'lion', 'bear', 'panda'}

#append() and extend()
>>> zoo1=zoo[:]
>>> zoo1, zoo
(['bear', 'lion', 'panda', 'zebra', 'tiger'], ['bear', 'lion', 'panda', 'zebra', 'tiger'])
>>> zoo1.append(['a','b'])
>>> zoo1
['bear', 'lion', 'panda', 'zebra', 'tiger', ['a', 'b']]
>>> zoo.extend(['a','b'])
>>> zoo
['bear', 'lion', 'panda', 'zebra', 'tiger', 'a', 'b']

 #sorting
>>> zoo.sort()
>>> zoo
['a', 'b', 'bear', 'lion', 'panda', 'tiger', 'zebra']


#list comprehension
>>> [x**2 for x in range(10)]
[0, 1, 4, 9, 16, 25, 36, 49, 64, 81]
>>> [x**2 for x in range(10) if x%2==0]
[0, 4, 16, 36, 64]


#counting occurance
>>> zoo.count('tiger')
1




