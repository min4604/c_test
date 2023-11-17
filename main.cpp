import random
for _ in range(13):
  print( (chr(random.randint(65,90)+(32*random.randint(0,1))),(random.choice("!@#$%&"),random.randint(48,57))[random.randint(0,1)])[random.randint(0,1)] ,end="")
