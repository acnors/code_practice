import time
import threading

unsorted = [2,8,4,5,1]
sorted = []

def sleepsort(x):
    time.sleep(x)
    sorted.append(x)
    print(x)

for x in unsorted:
   thread = threading.Thread(target=sleepsort, args=(x,))
   thread.start()

