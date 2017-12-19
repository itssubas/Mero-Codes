#Mutable and immutable
#mutable: list, dict, set, bytearray, classes
#immutable: int, float, complex, boolean, string, tuple, frozenset, bytes

#integers
>>> a=5
>>> b=a
>>> id(a), id(b)
(4305321216, 4305321216)
>>> b=6
>>> id(a), id(b)
(4305321216, 4305321248)
>>> a,b
(5, 6)

#strings
>>> x='hello world'
>>> y=x
>>> y='hello nepal'
>>> x, y
('hello world', 'hello nepal')
>>> id(x), id(y)
(4363450544, 4363450608)

#lists
>>> a=[1,2,3]
>>> b=a
>>> b.append(4)
>>> a,b
([1, 2, 3, 4], [1, 2, 3, 4])
>>> id(a),id(b)
(4363441544, 4363441544)

#dict
>>> dict1={'a':1, 'b':2, 'c':3}
>>> dict2=dict1
>>> dict1['d']=4
>>> dict1, dict2
({'a': 1, 'b': 2, 'c': 3, 'd': 4}, {'a': 1, 'b': 2, 'c': 3, 'd': 4})

