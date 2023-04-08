class Solution:
    def numRescueBoats(self, people: List[int], limit: int) -> int:
        people.sort()
        lo=0
        hi=len(people)-1
        boat=0
        while lo<=hi:
            if people[hi]+people[lo]<=limit:
                lo+=1
                hi-=1
            else:
                hi-=1
            boat+=1
        return boat
