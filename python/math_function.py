import math
a=float(input("Enter a value for a:"))
b=float(input("Enter a value for b:"))
print("1--> Square Root")
print("2--> Power")
print("3--> Ceil")
print("4--> Floor")
print("5--> Absolute")
print("6--> Factorial")
print("7--> Mod")
print("8--> Hypotenuse")
print("9--> Log")
print("10--> Log1p")
print("11--> Sin")
print("12--> Cos")
print("13--> Tan")
print("14--> PI value")
print("15--> Exponential Value")
print("16--> Sinh")
print("17--> Cosh")
print("18--> Tanh")
n=int(input("Enter a value for n:"))
if n==1:
    print("Square root of a=",math.sqrt(a))
    print("Square root of b=",math.sqrt(b))
elif n==2:
    print("Power =",math.pow(a,b))
elif n==3:
    print("Ceil of a=",math.ceil(a))
    print("Ceil of b=",math.ceil(b))
elif n==4:
    print("Floor of a=",math.floor(a))
    print("Floor of b=",math.floor(b))
elif n==5:
    print("Absolute value of a=",math.fabs(a))
    print("Absolute value of b=",math.fabs(b))
elif n==6:
    print("Factorial of a=",math.factorial(a))
    print("Factorial of b=",math.factorial(b))
elif n==7:
    print("Modulus=",math.fmod(a,b))
elif n==8:
    print("Hypoteneus=",math.hypot(a,b))
elif n==9:
    print("Log of a=",math.log(a))
    print("Log of b=",math.log(b))
elif n==10:
    print("Log1p of a=",math.log1p(a))
    print("Log1p of b=",math.log1p(b))
elif n==11:
    print("sin(a)=",math.sin(a))
    print("sin(b)=",math.sin(b))
elif n==12:
    print("cos(a)=",math.cos(a))
    print("cos(b)=",math.cos(b))
elif n==13:
    print("tan(a)=",math.tan(a))
    print("tan(b)=",math.tan(b))
elif n==14:
    print("Value of pi=",math.pi)
elif n==15:
    print("Exponential of a (e^a) =", math.exp(a))
    print("Exponential of b (e^b) =", math.exp(b))
elif n==16:
    print("sinh(a)=",math.sinh(a))
    print("sinh(b)=",math.sinh(b))
elif n==17:
    print("cosh(a)=",math.cosh(a))
    print("cosh(b)=",math.coh(b))
elif n==18:
    print("tanh(a)=",math.tanh(a))
    print("tanh(b)=",math.tanh(b))
else:
    print("Invalid entry")