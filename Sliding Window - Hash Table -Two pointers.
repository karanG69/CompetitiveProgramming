def findAnagrams(s, p):
    p_hash={}
    s_hash={}
    ans_list=[]
    if len(s)<len(p):
        return ans_list
    for i in p:
        if i not in p_hash:
            p_hash[i]=1
        else:
            p_hash[i]+=1
    print("p_hash-")
    print(p_hash)
    left=0
    right=len(p)
    while left<right:
        if s[left] not in s_hash:
            s_hash[s[left]]=1
        else:
            s_hash[s[left]]+=1
        left+=1
    print("1st-")
    print(s_hash)
    left=0
    while right<=len(s):
        if s_hash==p_hash:
            ans_list.append(left)
        if right<len(s):
            s_hash[s[left]]-=1
            if s_hash[s[left]]==0:
                del s_hash[s[left]]
            if s[right] in s_hash:
                s_hash[s[right]]+=1
                print(s_hash)
                print(right)
            else:
                s_hash[s[right]]=1
                print(right)
                print(s_hash)
            right+=1
            left+=1
            print(left)
            print(right)
    return ans_list
s=input() #abab

p=input()#abc
print(findAnagrams(s, p))
