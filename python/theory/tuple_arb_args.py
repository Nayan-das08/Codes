def func(*x):
    print(x)

func(0,1,2,4,5,6)
func(10,20,30)
func(list(range(5)), 20, 30.5, "hello")