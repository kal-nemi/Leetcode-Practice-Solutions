from itertools import cycle

class Solution:
    def convert(self, s, numRows):
        idxs = list(range(numRows)) + list(reversed(range(numRows-1)))
        goods = sorted(zip(cycle(idxs[:-1]),s), key=lambda x:x[0])
        return "".join(map(lambda x: x[1], goods)) if numRows >1 else s