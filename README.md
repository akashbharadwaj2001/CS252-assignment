# CS252-assignment
### Name: Akash S Bharadwaj

### Roll No.: 191EC103

# Questions:
## 1) 3.21  [Code](https://github.com/akashbharadwaj2001/CS252-assignment/blob/main/3.21.c)

![image](https://user-images.githubusercontent.com/72349215/143685327-02be78fe-077c-40e3-998d-27b48e90d5cf.png)

The code starts with taking a positive integer input. A process is initialized and branched into parent process and child process. In the child process (pid = 0), the above mentioned algorithm is executed while the parent process waits till child process completes its execution.

## 2) 4.24  [Code](https://github.com/akashbharadwaj2001/CS252-assignment/blob/main/4.24.c)

![image](https://user-images.githubusercontent.com/72349215/143685888-2e0c9c16-5d67-497a-8972-6bbec2f5487f.png)
![image](https://user-images.githubusercontent.com/72349215/143685899-80a2a7d4-00a9-4d59-b43a-11482de29387.png)

The code has a getRandom function(thread function) which generates random numbers between -1 to 1 and determines whether the generated point is in circle or not. A global variable keeps track of number of points inside the circle. In the main process the value of pi is calculated using the above given formula. 

# References
Tasks: https://www.geeksforgeeks.org/fork-system-call/  
Threads: https://www.geeksforgeeks.org/thread-functions-in-c-c/
