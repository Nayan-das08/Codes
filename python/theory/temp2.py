def func():
    global x, y
    x = 20
    y = 40

def fn():
    print(x+10)
    print(y+10)

func()
fn()