def get():
    values = {}
    values['a'] = int(input("Enter a : "))
    values['b'] = int(input("Enter b : "))
    #return {'a':a,'b':b}
    return values

def divide(values):
    values['ans'] = values['a'] / values['b']
    values['op'] = 'division'
    return values

def subtract(values):
    values['ans'] = values['a'] - values['b']
    values['op'] = 'subtraction'
    return values

def multiply(values):
    values['ans'] = values['a'] * values['b']
    values['op'] = 'multiplication'
    return values

def add(values):
    values['ans'] = values['a'] + values['b']
    values['op'] = 'addition'
    return values

def remainder(values):
    values['ans'] = values['a'] % values['b']
    values['op'] = 'remainder'
    return values
