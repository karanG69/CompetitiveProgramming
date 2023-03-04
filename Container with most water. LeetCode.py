class Solution:
    def maxArea(self, height: List[int]) -> int:
        maxarea=0
        i=0
        j=len(height)-1
        while i<j:
            length=min(height[i],height[j])
            width=j-i
            maxarea=max(maxarea,length*width)
            if height[i]>height[j]:
                j-=1
            else:
                i+=1
            
        return maxarea
