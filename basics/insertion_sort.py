lst = [15, 9, 8, 1, 4, 11, 7, 12, 13, 6, 5, 3, 16, 2, 10, 14]

def insert(lst, i):
  buf = lst[i+1]
  j = i
  while buf < lst[j] and j >= 0:
    lst[j+1] = lst[j]
    j = j - 1
  lst[j+1] = buf

def sort(lst):
  for i in xrange(len(lst)-1):
    insert(lst, i)
  print lst

if __name__ == "__main__":
  print lst
  sort(lst)