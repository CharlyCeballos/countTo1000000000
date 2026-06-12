import time
'''
Write a program that counts to 1 000 000 000 in Python
'''

start = time.time()

n = 0
while n < 1000000000:
    n += 1

end = time.time()
total_time = end - start

print(f"Counted to: {n}")

if total_time >= 60:
    minutes = int(total_time // 60)
    seconds = total_time % 60
    print(f"Executed time: {minutes} minutes y {seconds:.2f} seconds")

elif total_time < 1:
    miliseconds = total_time * 1000
    print(f"Executed time: {miliseconds:.2f} miliseconds (ms)")

else:
    print(f"Executed time: {total_time:.2f} seconds")
