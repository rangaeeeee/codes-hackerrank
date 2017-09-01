import math

n = int(input().strip())
person = 5
totalLikes = 0
for i in range(n):
  likes    = math.floor(person/2)
  totalLikes += likes
  dislikes = person - likes
  person   = 3*likes
#  print("likes : " + str(likes) + " dislikes : " + str(dislikes) + " person : " + str(person))
print (totalLikes)