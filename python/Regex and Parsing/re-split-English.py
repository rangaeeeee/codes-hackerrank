import re

st = input()
val = re.split("[\,,\.]",st)
for x in val:
  if str(x).strip() != "":
    print(x)