#AUTHOR 		: 	BHUVNESH JAIN
#INSTITUTION	: 	BITS, PILANI

from math import *
MAX = 100005
MOD = 1000000007
def add(a,b,c):
	res=a+b
	if(res>=c):
		return res-c
	else:
		return res

def mod(a,b,c):
	res=a*b
	if(res>=c):
		return res%c
	else:
		return res

def gcd(a,b):
	while b:
		a,b=b,a%b
	return a

def lcm(a,b):
	w=a//gcd(a,b)
	return w*b

def expo(a,b):
	x,y=1,a
	while(b>0):
		if(b&1):
			x=x*y
		y=y*y
		b>>=1
	return x

def power(a,b,m):
	x,y=1,
	while(b>0):
		if(b&1):
			x=mod(x,y,m)
		y=mod(y,y,m)
		b>>=1
	return x

def alldivisors(n) : 
    	list = []  
   	arr = []
    	for i in range(1, int(sqrt(n) + 1)) :
        	if (n % i == 0): 
            	         if (n / i == i) : 
                		arr+=[i]
            	else:
                	arr+=[i]
                	list.append(n//i)  
        arr += list[::-1]
        return arr

if __name__ == "__main__":
	#code goes below
