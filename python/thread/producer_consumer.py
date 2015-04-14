#!/usr/bin/python

from threading import Thread, Lock, Condition
import time
import random

queue = []
condition = Condition()
class ProducerThread(Thread):
    def run(self):
        nums = range(5) #Will create the list [0, 1, 2, 3, 4]
        global queue
        while True:
            condition.acquire()
            num = random.choice(nums) #Selects a random number from list [0, 1, 2, 3, 4]
            queue.append(num)
            print "P:", queue 
            condition.notify()
            condition.release()
            time.sleep(random.random())


class ConsumerThread(Thread):
    def run(self):
        global queue
        while True:
            condition.acquire()
            if not queue:
                print "Nothing in queue, consumer is wait"
                condition.wait()
                print "Producer added to queue, and notified consumer"
            num = queue.pop(0)
            print "C:", queue 
            condition.release()
            time.sleep(random.random())


ProducerThread().start()
ConsumerThread().start()
