import time
import colorama

def progress_bar(progress, total):
    percent = (progress/float(total)) * 100
    bar = '█'*int(percent/2) + '-'*(50-int(percent/2))
    print(f"\r|{bar}|  {percent:.1f}%", end='\r')
    if progress == total:
        print(colorama.Fore.GREEN + f"\r|{bar}|  {percent:.1f}%", end='\r')
    
for i in range(1000):
    time.sleep(0.000000001)
    progress_bar(i+1,1000)
   
print(colorama.Fore.RESET)