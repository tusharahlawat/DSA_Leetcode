class Solution(object):
    def reverseWords(self, s):
        """
        :type s: str
        :rtype: str
        """
        y = s.split()[::-1]

        return ' '.join(y)