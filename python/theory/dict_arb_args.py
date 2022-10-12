def func(first, last, **rest):
    info = {}
    info['first'] = first
    info['last'] = last
    for key,value in rest.items():
        info[key] = value
    #print(info)
    return info

def print_info(info):
    for key,value in info.items():
        print(f"{key}\t : {value}")

student = func('nayan', 'das', sem='4', course='b.tech cse', cgpa=8.4)
print_info(student)
print()
student = func('mantu', 'singh', course='b.tech mech', cgpa=9.48)
print_info(student)