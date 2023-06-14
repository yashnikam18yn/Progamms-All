from matplotlib.pyplot import cla


class demo:
    #x=10
    def add(self,a,b):
        print("the addition is:",a+b)

class derived(demo):
    def sub(self,a,b):
        print("the substraction is:",a-b)

class derived1(derived):
    def mul(self,a,b):
        print("the multilication is:",a*b)



obj=derived1()
obj.add(10,20)
obj.sub(23,12)
obj.mul(2,5)