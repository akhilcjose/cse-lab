s=input()

def recursive(s,l):
  if(l==len(s)):
    return
  recursive(s,l+1)
  print(s[l])
  
recursive(s,0)
