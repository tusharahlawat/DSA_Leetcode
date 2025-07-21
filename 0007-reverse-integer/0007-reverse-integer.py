class Solution(object):
    def reverse(self, x):
        """
        :type x: int
        :rtype: int
        """
        y=str(x)
        if x<0:
            z = int(y[:0:-1])
            z=-1*z
        else:
            z = int(y[::-1])

        if(-2**31<=z<2**31):
            return z
        else:
            return 0
            
        
        
        