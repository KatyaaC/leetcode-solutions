class Solution:
    def reverse(self, x: int) -> int:
        temp=abs(x)
        rev=0
        while temp != 0 :
            rev=rev*10+temp%10
            temp=temp//10
                    
        if x<0:
            rev=-rev
        if ((-2)**31<rev<(2**31)-1):
            return rev
        else:
            return 0 
            

