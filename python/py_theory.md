# Python Theory (from various resources)
Author: Nayan
## Quick Notes
* for some string str, ```str.title()``` -> returns first letter uppercase
* for some string str, ```str.lower()``` -> returns all lower case
* for some string str, ```str.upper()``` -> returns all upper case
* no unary increment and decrement operators. hence, for ```i++```, we would use ```i+=1```
* concatenation of string, or ```char[]``` using ```+``` operator
* to concatenate any other datatype to string, use ```str(variable)``` first to convert it to string
* indentation is crucual and is to be used when needed only
* to clear screen in python interpreter, use
    ```python
    import os
    os.system('cls')
    ```
* to return the datatype of variable, use ```type(variable)```
* **```f-strings```**
    ```python
    x = 10
    y = f"hello {x}"
    ```
  * we put an ```f``` before the string to denote f-string
  * we can put variables of other datatypes in between the string using ```{}``` 
  * alternative is ```%``` operator (%s -> format specifier)
    ```python
    x = 10
    y = "hello"
    z = "%s%s" % (x,y)
    ```
* ```global x``` inside a function creates a global variable. also used to modify global variables inside a function block

----
## Lists

```python
list_1 = [0,1,2,3,4,5]
list_2 = ['hello', 'bye']
```

* the elements can be accessed using **index numbers** like: ```list[5]```
* we can **modify** the values of list from ```list[0] - list[n-1]```
* trying to modify anything beyond ```list[n-1]``` is error
* a list can have elements of **multiple datatypes**
* to display 'last nth' element of list, we use ```list[-n]```
---
* ```range(i,j)``` is a function that returns a list from ```i``` to ```j-1```
* to initialize a variable with a list using ```range()```, we use ```x = list(range(i,j))```
* ```range(i,j,k)``` gives a list from ```i``` to ```j```, but adds ```k``` repeatedly to each value
---
* to create an empty list, ```list = []```
* to create list with some condition in one line,
    ```python
    odd  = [i for i in range(1,20,2)]
    even = [i for i in range(0,20,2)]
    ```
* **slicing a list : ```list[i:j]```**
  * gives list from ```list[i]``` to ```list[j-1]```
  * ```i``` by default is ```0```
  * ```j``` by default is ```len(list)-1```
  * ```list[-i:j]``` gives list from ```list[-i]``` to ```list[j-1]```
  * ```list[i:-j]``` gives list from ```list[i]``` to ```list[-(j-1)]```
  * ```list[i:j:k]``` gives list from ```list[i]``` to ```list[j-1]``` by adding ```k``` repeatedly to each term

* **tuple: an immutable list**
    ```python
    x = (10,20,30)
    ```
  * a new datatype
  * immutable

**Some functions for lists:-**
|          functions            |        remarks            |
|        :-------------         |       :-----              |
|```list.append(elements)```    |   append the element      |
|```del list[index]```          |   delete the particular index|
|```list.pop()```               |   delele last element     |
|```list.pop(index)```          |   delete the particular index |
|```list.remove(element)```     |   delte particular element |
|```list.sort()```              |   sort the list (asc.)    |
|```list.sort(reverse=True)```  |   sort the list (dec.)    |
|```sorted(list)```             |   sort the list temporarily |
|```list.reverse()```           |   reverse the list        |
|```len(list)```                |   length of the list      |
|```min(list)```                |   return min of list      |
|```max(list)```                |   return max of list      |
|```sum(list)```                |   return sum of list      |


----
## ```for``` loop

```python
list = [10,20,30,40,50,60]
i=1
for n in list:
    print(f"element #{i} = {n}")
    i+=1
```

* the first line ```for n in list:``` tells the interpreter to retrieve the values from list *sequentially*
* for each iteration, ```n``` contains the value of corresponding element from the list
* loop runs till there are no more elements in the list
* **DON'T** forget the *colon in the first line*  
* ```n in list``` is a conditional statement.
  * ```True```  -> if ```n``` gets some value from ```list```
  * ```False``` -> if ```n``` gets null value
  * loop works till the condition is ```True```

----
## ```if-elif-else```

```python
x = [i for i in range(0,20)]
for i in x:
    if (i == 5):
        print("5 is found")
    elif (i == 7):
        print("7 is found")
    else:
        print("The numbers are other than 5 and 7")
```

* we implement logical operations, we use ```and```, ```or``` and ```not```
* for some list ```x```, ```value in x``` gives:
  * ```True```  -> if ```value``` exists in ```list```
  * ```False``` -> if ```value``` doesn't exist in ```list```
   
example for checking a value in a list
```python
x = ["hello", "byee", "ciao"]
search_1 = "good morning"
search_2 = "hello"
print(x)

if search_1 not in x:
    print(f"{search_1} not in x")
else:
    print(f"{saerch_1} is there in the list")

if search_2 not in x:
    print(f"{search_2} not in x")
else:
    print(f"{saerch_2} is there in the list")
```

* the values of conditions can be stored in variables as ```boolean```
* parenthesis is not required syntactically

----
## Dictionary

```python
emp = {'desg':'manager', 'ctc':2000000, 'dept':'marketing'}
ball = {"dia":10, "colour":'blue'}
```

* a datatype where the instances store data as per their relation in the real world
* contains ```key-value``` pairs of data about the dictionary
* its analogous to ```structure``` in C/C++ where we can have any number of fields of any datatype.
* to add new ```key-value``` pairs, or to modify existing pairs,
    ```python
    ball['wt'] = 50
    ball['material'] = 'rubber'
    ```
* empty dictionary: ```dict = {}```
* remove ```key-value``` pairs: ```del dict[key]```
* for loop in dictionary:
  * thru all the ```key-value``` pairs use ```dict.items()```
    ```python
    for key, value in dict.items():
        # loop statements
    ```
  * thru all the ```keys``` use ```dict.keys()```
    ```python
    for key in dict.keys():    # or just dict
        # loop statements
    ```
  * thru all the ```values``` use ```dict.values()```
    ```python
    for key in dict.values():
        # loop statements
    ```

* we can also create a list of dictionaries
* the ```keys``` *need not be same*
* suppose, we are creating some dictionary ```dict``` and a list of dictionaries ```list``` and we append ```dict``` to ```list```.
  * if either ```dict``` or ```list[-1]``` is modified, the other is modified as well

* we can create a list in a dictionary
* we can create a dictionary in a dictionary

----
## User Input

```python
x = input("Enter x : ")
```

* the entered value in ```input()``` is treated as a string. 
* to input integer/numeric values, use ```int(input())```

----
## ```while``` Loop

```python
i=1
while i<=10:
    print(i)
    i+=1
```

* asking user *when to quit*
    ```python
    choice = 'yes'
    while choice == 'yes':
        print("We are in the loop")
        choice = input("Continue : (yes/no)")
    ```
* exit a loop: ```break```
* skip an iteration: ```continue```
* a list or dictionary can be used as condition for while loop
    ```python
    while list:
        # Loop statements till list is not empty
    ```
* the statement following ```while``` is a conditional statement. hence it can be anything. examples are:-
  * ```while list:```
  * ```while dict:```
  * ```while some_value in list:```
  * ```while any_bool_value:```

----
## Functions

```python
def func(i, j):
    print(i+j)
    return (i-j)
```

* *formal parameters* do not require data type declaration in function header
* the actual parameters must match with the formal, that's all

* **keyword arguments**
  * to change the order of *actual parameters*, use ```func(i=x, j=y)```
  * if doing so, you need to keep all of the arguments this way

* **default values** 
  * same as C/C++, *non-default arguments* cannot follow *default arguments*

* **passing arguments**
  * when passing strings, int, etc., a copy of actual args are sent to formal args
  * when passing list, a reference to the original list is sent, hence the changes are reflected
  * to avoid this, you can send a copy of the list using ```func(list[i:j])```

* you **can't** pass arguments by reference in python
  * for similar results you have to work around this

* **arbitrary number of arguments**
    ```python
        def func(*x):
        print(x)

    func(0,1,2,4,5,6)
    func(10,20,30)
    func(list(range(5)), 20, 30.5, "hello")
    ```
  * the formal parameter forms an empty ```tuple```
  * stores all values passed from function call
  * to create an empty ```dictionary``` in the formal parameter, use ```**x```
